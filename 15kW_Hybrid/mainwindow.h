#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QMessageBox>
#include <QDebug>
#include <string.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void oscilloscope_init(void);

    void oscilloscope_clear(void);

    void recv_data_32(QByteArray recv_buf);

    void button_status(quint16 *unit, QPushButton* button);

    void on_tcp_connect_button_clicked();

    void on_tcp_send_button_clicked();

    void on_tcp_recclear_button_clicked();

    void on_battery_button_clicked();

    void on_ESC_button_clicked();

    void on_rectifier_button_clicked();
    void on_save_as_xlsx_button_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QTimer *ms_100;
    QVector <double> time_x, engine_speed_y, throttle_position_y,
                     first_cylinder_temprature_y, second_cylinder_temprature_y,
                     engine_working_state_y, engine_warm_up_y, engine_idling_set_y,
                     air_inflow_y;
};

#endif // MAINWINDOW_H
