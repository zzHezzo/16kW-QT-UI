#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "traslation.h"
#include "qcustomplot.h"
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/xmu-logo.ico"));  setWindowTitle("厦门大学航空航天学院——Version 1.5");

    socket = new QTcpSocket;

    ms_100 = new QTimer;
    QVector <double> time_x, engine_speed_y, throttle_position_y,
                    first_cylinder_temprature_y, second_cylinder_temprature_y,
                    engine_working_state_y, engine_warm_up_y, engine_idling_set_y,
                    air_inflow_y;
    //oscilloscope_init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::oscilloscope_clear(void){
    time_x.clear();
    engine_speed_y.clear();
    throttle_position_y.clear();
    first_cylinder_temprature_y.clear();
    second_cylinder_temprature_y.clear();
    engine_working_state_y.clear();
    engine_warm_up_y.clear();
    engine_idling_set_y.clear();
    air_inflow_y.clear();
}

void MainWindow::oscilloscope_init(void){
    QPen pen;
    oscilloscope_clear();
//    ui->engine_speed_plot->setBackground(QBrush(QColor("#474848")));
    ui->engine_speed_plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->engine_speed_plot->addGraph();
    ui->engine_speed_plot->xAxis->setLabel("t (s)");
    ui->engine_speed_plot->yAxis->setLabel("engine_speed (rpm)");
    ui->engine_speed_plot->yAxis->setRange(0, 7000);
    pen.setWidth(3);    pen.setColor(Qt::red);
    ui->engine_speed_plot->graph(0)->setPen(pen);
    ui->engine_speed_plot->graph(0)->setBrush(QBrush(QColor(255,50,30,20)));

    ui->throttle_position_plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->throttle_position_plot->addGraph();
    ui->throttle_position_plot->xAxis->setLabel("t (s)");
    ui->throttle_position_plot->yAxis->setLabel("throttle_angle (°)");
    ui->throttle_position_plot->yAxis->setRange(0, 90);
    pen.setWidth(3);    pen.setColor(Qt::blue);
    ui->throttle_position_plot->graph(0)->setPen(pen);
    ui->throttle_position_plot->graph(0)->setBrush(QBrush(QColor(30,50,255,20)));
    double plot_time = 0;

    connect(ms_100, &QTimer::timeout, this, [=]()mutable{
        //static double plot_time = 0;
        plot_time = plot_time + 0.1;
        qDebug() << plot_time;
        time_x.push_back(plot_time);

        engine_speed_y.push_back(engine_speed);
        ui->engine_speed_plot->graph(0)->setData(time_x, engine_speed_y);
        ui->engine_speed_plot->xAxis->setRange(plot_time-10,plot_time);
        ui->engine_speed_plot->replot();

        throttle_position_y.push_back(throttle_position);
        ui->throttle_position_plot->graph(0)->setData(time_x, throttle_position_y);
        ui->throttle_position_plot->xAxis->setRange(plot_time-10,plot_time);
        ui->throttle_position_plot->replot();

        first_cylinder_temprature_y.push_back(first_cylinder_temprature);
        second_cylinder_temprature_y.push_back(second_cylinder_temprature);
        engine_working_state_y.push_back(engine_working_state);
        engine_warm_up_y.push_back(engine_warm_up);
        engine_idling_set_y.push_back(engine_idling_set);
        air_inflow_y.push_back(air_inflow);

    });
}

void MainWindow::recv_data_32(QByteArray recv_buf){

    first_cylinder_temprature = str_to_u16(recv_buf, 4);
    second_cylinder_temprature = str_to_u16(recv_buf, 6);
    engine_working_state = str_to_u16(recv_buf, 8);
    engine_speed = str_to_u16(recv_buf, 10);
    engine_warm_up = str_to_u16(recv_buf, 12);
    engine_idling_set = str_to_u16(recv_buf, 14);
    air_inflow = str_to_u16(recv_buf, 16);
    throttle_position =str_to_u16(recv_buf, 18);

    ui->first_cylinder_temprature->setText(QString::number(first_cylinder_temprature));
    ui->second_cylinder_temprature->setText(QString::number(second_cylinder_temprature));
    ui->engine_working_state->setText(QString::number(engine_working_state));
    ui->engine_speed->setText(QString::number(engine_speed));
    ui->engine_warm_up->setText(QString::number(engine_warm_up));
    ui->engine_idling_set->setText(QString::number(engine_idling_set));
    ui->air_inflow->setText(QString::number(air_inflow));
    ui->throttle_position->setText(QString::number(throttle_position));
}

void MainWindow::button_status(quint16 *unit, QPushButton* button){
    if(nullptr==socket)return;
    if(*unit == 0)  *unit = 1;
    else   *unit = 0;

    socket->write(send_data_32(),*send_data_32());
    if(socket->waitForBytesWritten(1000)){
        ui->tcp_recive_edit->append("发送成功");
        if(button->text() == "关闭")   button->setText("打开");
        else button->setText("关闭");
    }else{
        ui->tcp_recive_edit->append("发送失败");
        if(*unit == 0)  *unit = 1;
        else   *unit = 0;
    }
}

void MainWindow::on_tcp_connect_button_clicked()
{
    if(NULL == ui->tcp_ip_edit->text() || NULL == ui->tcp_port_edit->text()){
        ui->tcp_ip_edit->setText("192.168.1.30");
        ui->tcp_port_edit->setText("8088");
    };
    QString Server_IP = ui->tcp_ip_edit->text();
    quint16 Server_PORT = ui->tcp_port_edit->text().toInt();

    if(socket->state() == QAbstractSocket::UnconnectedState){
        socket->connectToHost(Server_IP,Server_PORT);
        if(socket->waitForConnected(1000)){
            ui->tcp_recive_edit->append("连接成功");
            ui->tcp_connect_button->setText("断开");
            oscilloscope_init();
            connect(socket, &QTcpSocket::readyRead, [this](){
                QByteArray client_recv_buf = socket->readAll();
                recv_data_32(client_recv_buf);
                ui->tcp_recive_edit->append("服务器端："+client_recv_buf.toHex());
            });
            ms_100->start(100);
            ui->tcp_send_button->setEnabled(true);  ui->battery_button->setEnabled(true);
            ui->ESC_button->setEnabled(true);  ui->rectifier_button->setEnabled(true);
        }else{
            ui->tcp_recive_edit->append("连接失败");
            ui->tcp_send_button->setEnabled(false);  ui->battery_button->setEnabled(false);
            ui->ESC_button->setEnabled(false);  ui->rectifier_button->setEnabled(false);
        }
    }else{
        socket->write(closeSignal,5);//发送关闭信号
        if(socket->waitForBytesWritten(1000))
        {ui->tcp_recive_edit->append("发送成功");
        socket->disconnectFromHost();
        if(socket->state() == QAbstractSocket::UnconnectedState||socket->waitForDisconnected(1000)){
            ui->tcp_recive_edit->append("断开成功");
            ui->tcp_connect_button->setText("连接");
            socket->disconnect();
            ms_100->stop();
            ms_100->disconnect();
            ui->tcp_send_button->setEnabled(false);  ui->battery_button->setEnabled(false);
            ui->ESC_button->setEnabled(false);  ui->rectifier_button->setEnabled(false);
        }else{
            ui->tcp_recive_edit->append("断开失败");
            ui->tcp_send_button->setEnabled(true);  ui->battery_button->setEnabled(true);
            ui->ESC_button->setEnabled(true);  ui->rectifier_button->setEnabled(true);
        }
        }else{
            ui->tcp_recive_edit->append("发送失败&断开失败");
        }
    }
}

void MainWindow::on_tcp_send_button_clicked()
{
    if(nullptr==socket)return;
    valve_servo = ui->valve_servo_box->text().toUShort();
    socket->write(send_data_32(),*send_data_32());
    if(socket->waitForBytesWritten(1000))  ui->tcp_recive_edit->append("发送成功");
    else    ui->tcp_recive_edit->append("发送失败");
}

void MainWindow::on_tcp_recclear_button_clicked()
{
    ui->tcp_recive_edit->clear();
}

void MainWindow::on_battery_button_clicked()
{
    button_status(&battery_status, ui->battery_button);
}

void MainWindow::on_ESC_button_clicked()
{
    button_status(&ESC_relay_status, ui->ESC_button);
}

void MainWindow::on_rectifier_button_clicked()
{
    button_status(&rectifier_relay_status, ui->rectifier_button);
}

void MainWindow::on_save_as_xlsx_button_clicked()
{
    static QXlsx::Document xlsx;

    xlsx.write(1, 1, "time (s)");   xlsx.write(1, 2, "Engine_Speed (rpm)");   xlsx.write(1, 3, "throttle_angle (°)");
    xlsx.write(1, 4, "first_cylinder_temprature (℃)");   xlsx.write(1, 5, "second_cylinder_temprature (℃)");
    xlsx.write(1, 6, "engine_working_state");   xlsx.write(1, 7, "engine_warm_up");
    xlsx.write(1, 8, "engine_idling_set");   xlsx.write(1, 9, "air_inflow");

    for(int i = 0; i < time_x.length(); i++){
        xlsx.write(i+2, 1, time_x[i]);
        xlsx.write(i+2, 2, engine_speed_y[i]);
        xlsx.write(i+2, 3, throttle_position_y[i]);
        xlsx.write(i+2, 4, first_cylinder_temprature_y[i]);
        xlsx.write(i+2, 5, second_cylinder_temprature_y[i]);
        xlsx.write(i+2, 6, engine_working_state_y[i]);
        xlsx.write(i+2, 7, engine_warm_up_y[i]);
        xlsx.write(i+2, 8, engine_idling_set_y[i]);
        xlsx.write(i+2, 9, air_inflow_y[i]);
    }
    ui->tcp_recive_edit->append("数据已保存为excel文件");
    xlsx.saveAs("16kW_experiment.xlsx");
}
