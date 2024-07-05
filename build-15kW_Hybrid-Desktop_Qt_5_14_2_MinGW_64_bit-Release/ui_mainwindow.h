/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QPushButton *tcp_recclear_button;
    QTextEdit *tcp_recive_edit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *first_cylinder_temprature;
    QLineEdit *second_cylinder_temprature;
    QLineEdit *throttle_position;
    QLineEdit *air_inflow;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_15;
    QVBoxLayout *verticalLayout;
    QLineEdit *engine_speed;
    QLineEdit *engine_working_state;
    QLineEdit *engine_idling_set;
    QLineEdit *engine_warm_up;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QCustomPlot *engine_speed_plot;
    QCustomPlot *throttle_position_plot;
    QCustomPlot *widget_3;
    QPushButton *save_as_xlsx_button;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *valve_servo_box;
    QPushButton *tcp_send_button;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QPushButton *battery_button;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QPushButton *ESC_button;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QPushButton *rectifier_button;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *tcp_connect_button;
    QWidget *layoutWidget3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *tcp_ip_edit;
    QLabel *label_2;
    QLineEdit *tcp_port_edit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1850, 1060);
        MainWindow->setMinimumSize(QSize(1850, 1060));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setIconSize(QSize(24, 24));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 460, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_4->setFont(font1);
        tcp_recclear_button = new QPushButton(centralwidget);
        tcp_recclear_button->setObjectName(QString::fromUtf8("tcp_recclear_button"));
        tcp_recclear_button->setGeometry(QRect(700, 460, 150, 40));
        tcp_recclear_button->setMinimumSize(QSize(150, 40));
        tcp_recclear_button->setMaximumSize(QSize(150, 40));
        tcp_recclear_button->setFont(font1);
        tcp_recive_edit = new QTextEdit(centralwidget);
        tcp_recive_edit->setObjectName(QString::fromUtf8("tcp_recive_edit"));
        tcp_recive_edit->setGeometry(QRect(10, 500, 841, 491));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        tcp_recive_edit->setFont(font2);
        tcp_recive_edit->setReadOnly(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 230, 801, 201));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

        verticalLayout_3->addWidget(label_9);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);

        verticalLayout_3->addWidget(label_13);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        first_cylinder_temprature = new QLineEdit(layoutWidget);
        first_cylinder_temprature->setObjectName(QString::fromUtf8("first_cylinder_temprature"));
        first_cylinder_temprature->setMinimumSize(QSize(180, 40));
        first_cylinder_temprature->setMaximumSize(QSize(180, 40));
        first_cylinder_temprature->setFont(font1);
        first_cylinder_temprature->setReadOnly(true);

        verticalLayout_4->addWidget(first_cylinder_temprature);

        second_cylinder_temprature = new QLineEdit(layoutWidget);
        second_cylinder_temprature->setObjectName(QString::fromUtf8("second_cylinder_temprature"));
        second_cylinder_temprature->setMinimumSize(QSize(180, 40));
        second_cylinder_temprature->setMaximumSize(QSize(180, 40));
        second_cylinder_temprature->setFont(font1);
        second_cylinder_temprature->setReadOnly(true);

        verticalLayout_4->addWidget(second_cylinder_temprature);

        throttle_position = new QLineEdit(layoutWidget);
        throttle_position->setObjectName(QString::fromUtf8("throttle_position"));
        throttle_position->setMinimumSize(QSize(180, 40));
        throttle_position->setMaximumSize(QSize(180, 40));
        throttle_position->setFont(font1);
        throttle_position->setReadOnly(true);

        verticalLayout_4->addWidget(throttle_position);

        air_inflow = new QLineEdit(layoutWidget);
        air_inflow->setObjectName(QString::fromUtf8("air_inflow"));
        air_inflow->setMinimumSize(QSize(180, 40));
        air_inflow->setMaximumSize(QSize(180, 40));
        air_inflow->setFont(font1);
        air_inflow->setReadOnly(true);

        verticalLayout_4->addWidget(air_inflow);


        horizontalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        verticalLayout_2->addWidget(label_11);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);

        verticalLayout_2->addWidget(label_14);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);

        verticalLayout_2->addWidget(label_15);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        engine_speed = new QLineEdit(layoutWidget);
        engine_speed->setObjectName(QString::fromUtf8("engine_speed"));
        engine_speed->setMinimumSize(QSize(180, 40));
        engine_speed->setMaximumSize(QSize(180, 40));
        engine_speed->setFont(font1);
        engine_speed->setReadOnly(true);

        verticalLayout->addWidget(engine_speed);

        engine_working_state = new QLineEdit(layoutWidget);
        engine_working_state->setObjectName(QString::fromUtf8("engine_working_state"));
        engine_working_state->setMinimumSize(QSize(180, 40));
        engine_working_state->setMaximumSize(QSize(180, 40));
        engine_working_state->setFont(font1);
        engine_working_state->setReadOnly(true);

        verticalLayout->addWidget(engine_working_state);

        engine_idling_set = new QLineEdit(layoutWidget);
        engine_idling_set->setObjectName(QString::fromUtf8("engine_idling_set"));
        engine_idling_set->setMinimumSize(QSize(180, 40));
        engine_idling_set->setMaximumSize(QSize(180, 40));
        engine_idling_set->setFont(font1);
        engine_idling_set->setReadOnly(true);

        verticalLayout->addWidget(engine_idling_set);

        engine_warm_up = new QLineEdit(layoutWidget);
        engine_warm_up->setObjectName(QString::fromUtf8("engine_warm_up"));
        engine_warm_up->setMinimumSize(QSize(180, 40));
        engine_warm_up->setMaximumSize(QSize(180, 40));
        engine_warm_up->setFont(font1);
        engine_warm_up->setReadOnly(true);

        verticalLayout->addWidget(engine_warm_up);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(890, 230, 961, 761));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        engine_speed_plot = new QCustomPlot(layoutWidget1);
        engine_speed_plot->setObjectName(QString::fromUtf8("engine_speed_plot"));

        verticalLayout_5->addWidget(engine_speed_plot);

        throttle_position_plot = new QCustomPlot(layoutWidget1);
        throttle_position_plot->setObjectName(QString::fromUtf8("throttle_position_plot"));

        verticalLayout_5->addWidget(throttle_position_plot);

        widget_3 = new QCustomPlot(layoutWidget1);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        verticalLayout_5->addWidget(widget_3);

        save_as_xlsx_button = new QPushButton(centralwidget);
        save_as_xlsx_button->setObjectName(QString::fromUtf8("save_as_xlsx_button"));
        save_as_xlsx_button->setGeometry(QRect(1700, 190, 150, 40));
        save_as_xlsx_button->setMinimumSize(QSize(150, 40));
        save_as_xlsx_button->setMaximumSize(QSize(150, 40));
        save_as_xlsx_button->setFont(font1);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(890, 30, 801, 171));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        horizontalLayout->addWidget(label_3);

        valve_servo_box = new QDoubleSpinBox(layoutWidget2);
        valve_servo_box->setObjectName(QString::fromUtf8("valve_servo_box"));
        valve_servo_box->setMinimumSize(QSize(150, 40));
        valve_servo_box->setMaximumSize(QSize(150, 40));
        valve_servo_box->setFont(font1);
        valve_servo_box->setDecimals(0);
        valve_servo_box->setMinimum(0.000000000000000);
        valve_servo_box->setMaximum(2000.000000000000000);
        valve_servo_box->setSingleStep(1.000000000000000);

        horizontalLayout->addWidget(valve_servo_box);

        tcp_send_button = new QPushButton(layoutWidget2);
        tcp_send_button->setObjectName(QString::fromUtf8("tcp_send_button"));
        tcp_send_button->setEnabled(false);
        tcp_send_button->setMinimumSize(QSize(150, 40));
        tcp_send_button->setMaximumSize(QSize(150, 40));
        tcp_send_button->setFont(font1);
        tcp_send_button->setAutoExclusive(false);
        tcp_send_button->setAutoDefault(false);
        tcp_send_button->setFlat(false);

        horizontalLayout->addWidget(tcp_send_button);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        horizontalLayout->addWidget(label_5);

        battery_button = new QPushButton(layoutWidget2);
        battery_button->setObjectName(QString::fromUtf8("battery_button"));
        battery_button->setEnabled(false);
        battery_button->setMinimumSize(QSize(150, 40));
        battery_button->setMaximumSize(QSize(150, 40));
        battery_button->setFont(font1);
        battery_button->setCheckable(true);
        battery_button->setChecked(false);
        battery_button->setAutoDefault(false);

        horizontalLayout->addWidget(battery_button);

        horizontalSpacer_2 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        horizontalLayout_3->addWidget(label_6);

        ESC_button = new QPushButton(layoutWidget2);
        ESC_button->setObjectName(QString::fromUtf8("ESC_button"));
        ESC_button->setEnabled(false);
        ESC_button->setMinimumSize(QSize(150, 40));
        ESC_button->setMaximumSize(QSize(150, 40));
        ESC_button->setFont(font1);
        ESC_button->setCheckable(true);
        ESC_button->setChecked(false);
        ESC_button->setAutoDefault(false);

        horizontalLayout_3->addWidget(ESC_button);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);

        horizontalLayout_4->addWidget(label_7);

        rectifier_button = new QPushButton(layoutWidget2);
        rectifier_button->setObjectName(QString::fromUtf8("rectifier_button"));
        rectifier_button->setEnabled(false);
        rectifier_button->setMinimumSize(QSize(150, 40));
        rectifier_button->setMaximumSize(QSize(150, 40));
        rectifier_button->setFont(font1);
        rectifier_button->setCheckable(true);
        rectifier_button->setChecked(false);
        rectifier_button->setAutoDefault(false);

        horizontalLayout_4->addWidget(rectifier_button);

        horizontalSpacer_4 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_5);

        tcp_connect_button = new QPushButton(centralwidget);
        tcp_connect_button->setObjectName(QString::fromUtf8("tcp_connect_button"));
        tcp_connect_button->setGeometry(QRect(520, 100, 150, 40));
        tcp_connect_button->setMinimumSize(QSize(150, 40));
        tcp_connect_button->setMaximumSize(QSize(150, 40));
        tcp_connect_button->setFont(font1);
        tcp_connect_button->setCheckable(true);
        tcp_connect_button->setChecked(false);
        tcp_connect_button->setAutoDefault(false);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(169, 70, 311, 111));
        formLayout = new QFormLayout(layoutWidget3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(10, 10, 6, 6);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        tcp_ip_edit = new QLineEdit(layoutWidget3);
        tcp_ip_edit->setObjectName(QString::fromUtf8("tcp_ip_edit"));
        tcp_ip_edit->setMinimumSize(QSize(180, 40));
        tcp_ip_edit->setMaximumSize(QSize(180, 40));
        tcp_ip_edit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, tcp_ip_edit);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        tcp_port_edit = new QLineEdit(layoutWidget3);
        tcp_port_edit->setObjectName(QString::fromUtf8("tcp_port_edit"));
        tcp_port_edit->setMinimumSize(QSize(180, 40));
        tcp_port_edit->setMaximumSize(QSize(180, 40));
        tcp_port_edit->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, tcp_port_edit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1850, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        tcp_send_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\345\214\272\357\274\232", nullptr));
        tcp_recclear_button->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\260\224\347\274\270 1 \346\270\251\345\272\246\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\260\224\347\274\270 2 \346\270\251\345\272\246\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\350\212\202\346\260\224\351\227\250\344\275\215\347\275\256\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\350\277\233\346\260\224\351\207\217\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        first_cylinder_temprature->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        second_cylinder_temprature->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        throttle_position->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        air_inflow->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\217\221\345\212\250\346\234\272\350\275\254\351\200\237\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\350\277\220\350\241\214\347\212\266\346\200\201\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\200\240\351\200\237\344\275\215\347\275\256\350\256\276\345\256\232\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\232\226\350\275\246\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        engine_speed->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        engine_working_state->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        engine_idling_set->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        engine_warm_up->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        save_as_xlsx_button->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\210\265\346\234\272\350\247\222\345\272\246\357\274\232", nullptr));
        tcp_send_button->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\272\220\357\274\232", nullptr));
        battery_button->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\260\203\347\273\247\347\224\265\345\231\250\357\274\232", nullptr));
        ESC_button->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\225\264\346\265\201\345\231\250\347\273\247\347\224\265\345\231\250\357\274\232", nullptr));
        rectifier_button->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        tcp_connect_button->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250IP\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        tcp_ip_edit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">192.168.1.30</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        tcp_port_edit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">8088</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
