#ifndef TRASLATION_H
#define TRASLATION_H
#include <stdio.h>
#include <QMainWindow>
#include <QDebug>

extern char client_send_buf[];

extern quint16 battery_status, valve_servo, ESC_relay_status, rectifier_relay_status,
               first_cylinder_temprature, second_cylinder_temprature,
               engine_working_state, engine_speed, engine_warm_up, engine_idling_set,
               air_inflow, throttle_position;
extern char   closeSignal[5];
char *send_data_32(void);


void u16tostr(quint16 u16data, char *buf, quint8 location);
quint16 str_to_u16(QByteArray recv_buf, quint8 location);
float string_to_float(QByteArray recv_buf, quint8 location);

#endif // TRASLATION_H
