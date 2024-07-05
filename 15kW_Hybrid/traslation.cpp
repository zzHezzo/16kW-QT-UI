#include "traslation.h"

quint8 ID_code = 103;
quint8 check_code = 104;

char client_send_buf[17];

//valve_servo∈[0,100]
quint16 battery_status=1, valve_servo, ESC_relay_status=1, rectifier_relay_status=1,
        first_cylinder_temprature, second_cylinder_temprature,
        engine_working_state, engine_speed, engine_warm_up, engine_idling_set,
        air_inflow, throttle_position;
char   closeSignal[5] = {'c','l','o','s','e'};

char *send_data_32(void){

    u16tostr(battery_status,client_send_buf,4);
    u16tostr(valve_servo,client_send_buf,10);
    u16tostr(ESC_relay_status,client_send_buf,12);
    u16tostr(rectifier_relay_status,client_send_buf,14);

    client_send_buf[0] = sizeof(client_send_buf);
    client_send_buf[1] = ID_code;
    client_send_buf[16] = check_code;
    return client_send_buf;
}

void u16tostr(quint16 u16data, char *buf, quint8 location){
    buf[location+1]=u16data>>8;
    buf[location]=u16data;
}

quint16 str_to_u16(QByteArray recv_buf, quint8 location){
    quint16 data;
    data = recv_buf.data()[location+1];
//    qDebug() << bin << recv_buf[location+1];
    data = data<<8&0XFF00;
    data += recv_buf.data()[location];

    return data;
}

float string_to_float(QByteArray recv_buf, quint8 location){
    int i;
    float float_data;
    float *pf = &float_data;
    for(i=0;i<4;i++)    *((char*)pf+i)=recv_buf[location+i];
    return float_data;
}
