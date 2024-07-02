/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_17;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_main;
    QFrame *line;
    QFrame *line_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *resetDataButton;
    QPushButton *exportDataButton;
    QPushButton *clearLogBoxButton;
    QPushButton *recordDataButton;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QGridLayout *gridLayout_14;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser_current_m1;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QTextBrowser *textBrowser_rpm_m1;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_13;
    QTextBrowser *textBrowser_ambient_temperature;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QTextBrowser *textBrowser_current_m3;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_11;
    QTextBrowser *textBrowser_current_m4;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_12;
    QTextBrowser *textBrowser_battery_temperature;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_10;
    QTextBrowser *textBrowser_rpm_m4;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_8;
    QTextBrowser *textBrowser_rpm_m3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QTextBrowser *textBrowser_rpm_m2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QTextBrowser *textBrowser_current_m2;
    QWidget *tab_6;
    QGridLayout *gridLayout_25;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_19;
    QGridLayout *gridLayout_20;
    QTextBrowser *textBrowser_console;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QFrame *line_3;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_16;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_41;
    QLabel *label_30;
    QComboBox *comboBox;
    QLabel *label_34;
    QLineEdit *lineEdit_4;
    QLabel *label_32;
    QLabel *label_29;
    QComboBox *comboBox_2;
    QLabel *label_31;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_33;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_18;
    QFrame *line_77;
    QSlider *motor3Slider;
    QFrame *line_75;
    QSlider *motor2Slider;
    QSlider *motor1Slider;
    QFrame *line_6;
    QLabel *motor4ControlLabel;
    QFrame *line_7;
    QFrame *line_76;
    QFrame *line_78;
    QLabel *label_4;
    QSlider *motor4Slider;
    QFrame *line_13;
    QFrame *line_9;
    QLabel *label_2;
    QFrame *line_8;
    QLabel *motor3ControlLabel;
    QLabel *motor2ControlLabel;
    QLabel *label;
    QFrame *line_74;
    QFrame *line_12;
    QFrame *line_11;
    QLabel *motor1ControlLabel;
    QFrame *line_79;
    QLabel *label_3;
    QFrame *line_10;
    QFrame *line_80;
    QGroupBox *groupBox_18;
    QGridLayout *gridLayout_19;
    QPushButton *slidersButton;
    QFrame *line_4;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_42;
    QPushButton *pushButton;
    QFrame *line_5;
    QWidget *tab_3;
    QComboBox *maxMotorSignalBox;
    QPushButton *saveSettingsButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1024, 600));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_17 = new QGridLayout(centralwidget);
        gridLayout_17->setObjectName("gridLayout_17");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tabWidget->setPalette(palette1);
        QFont font;
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridLayout_main = new QGridLayout();
        gridLayout_main->setObjectName("gridLayout_main");
        line = new QFrame(tab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_main->addWidget(line, 0, 0, 1, 1);

        line_2 = new QFrame(tab);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_main->addWidget(line_2, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_main);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(200, 0));
        groupBox->setMaximumSize(QSize(200, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        resetDataButton = new QPushButton(groupBox);
        resetDataButton->setObjectName("resetDataButton");
        resetDataButton->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(resetDataButton, 1, 0, 1, 1);

        exportDataButton = new QPushButton(groupBox);
        exportDataButton->setObjectName("exportDataButton");
        exportDataButton->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(exportDataButton, 0, 0, 1, 1);

        clearLogBoxButton = new QPushButton(groupBox);
        clearLogBoxButton->setObjectName("clearLogBoxButton");
        clearLogBoxButton->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(clearLogBoxButton, 2, 0, 1, 1);

        recordDataButton = new QPushButton(groupBox);
        recordDataButton->setObjectName("recordDataButton");
        recordDataButton->setMinimumSize(QSize(0, 80));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        recordDataButton->setPalette(palette2);

        gridLayout->addWidget(recordDataButton, 4, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 1, 1, 1);

        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        gridLayout_14 = new QGridLayout(tab_5);
        gridLayout_14->setObjectName("gridLayout_14");
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser_current_m1 = new QTextBrowser(groupBox_4);
        textBrowser_current_m1->setObjectName("textBrowser_current_m1");
        textBrowser_current_m1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(textBrowser_current_m1);


        gridLayout_4->addWidget(groupBox_4, 1, 9, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMinimumSize(QSize(0, 0));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName("gridLayout_5");
        textBrowser_rpm_m1 = new QTextBrowser(groupBox_3);
        textBrowser_rpm_m1->setObjectName("textBrowser_rpm_m1");
        textBrowser_rpm_m1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_5->addWidget(textBrowser_rpm_m1, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 0, 9, 1, 1);

        groupBox_12 = new QGroupBox(groupBox_2);
        groupBox_12->setObjectName("groupBox_12");
        groupBox_12->setMinimumSize(QSize(0, 0));
        gridLayout_13 = new QGridLayout(groupBox_12);
        gridLayout_13->setObjectName("gridLayout_13");
        textBrowser_ambient_temperature = new QTextBrowser(groupBox_12);
        textBrowser_ambient_temperature->setObjectName("textBrowser_ambient_temperature");
        textBrowser_ambient_temperature->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_13->addWidget(textBrowser_ambient_temperature, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_12, 1, 13, 1, 1);

        groupBox_8 = new QGroupBox(groupBox_2);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setMinimumSize(QSize(0, 0));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName("gridLayout_9");
        textBrowser_current_m3 = new QTextBrowser(groupBox_8);
        textBrowser_current_m3->setObjectName("textBrowser_current_m3");
        textBrowser_current_m3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_9->addWidget(textBrowser_current_m3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_8, 1, 11, 1, 1);

        groupBox_9 = new QGroupBox(groupBox_2);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setMinimumSize(QSize(0, 0));
        gridLayout_11 = new QGridLayout(groupBox_9);
        gridLayout_11->setObjectName("gridLayout_11");
        textBrowser_current_m4 = new QTextBrowser(groupBox_9);
        textBrowser_current_m4->setObjectName("textBrowser_current_m4");
        textBrowser_current_m4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_11->addWidget(textBrowser_current_m4, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_9, 1, 12, 1, 1);

        groupBox_11 = new QGroupBox(groupBox_2);
        groupBox_11->setObjectName("groupBox_11");
        groupBox_11->setMinimumSize(QSize(0, 0));
        gridLayout_12 = new QGridLayout(groupBox_11);
        gridLayout_12->setObjectName("gridLayout_12");
        textBrowser_battery_temperature = new QTextBrowser(groupBox_11);
        textBrowser_battery_temperature->setObjectName("textBrowser_battery_temperature");
        textBrowser_battery_temperature->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_12->addWidget(textBrowser_battery_temperature, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_11, 0, 13, 1, 1);

        groupBox_10 = new QGroupBox(groupBox_2);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setMinimumSize(QSize(0, 0));
        gridLayout_10 = new QGridLayout(groupBox_10);
        gridLayout_10->setObjectName("gridLayout_10");
        textBrowser_rpm_m4 = new QTextBrowser(groupBox_10);
        textBrowser_rpm_m4->setObjectName("textBrowser_rpm_m4");
        textBrowser_rpm_m4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_10->addWidget(textBrowser_rpm_m4, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_10, 0, 12, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setMinimumSize(QSize(0, 0));
        gridLayout_8 = new QGridLayout(groupBox_7);
        gridLayout_8->setObjectName("gridLayout_8");
        textBrowser_rpm_m3 = new QTextBrowser(groupBox_7);
        textBrowser_rpm_m3->setObjectName("textBrowser_rpm_m3");
        textBrowser_rpm_m3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_8->addWidget(textBrowser_rpm_m3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_7, 0, 11, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(0, 0));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName("gridLayout_6");
        textBrowser_rpm_m2 = new QTextBrowser(groupBox_5);
        textBrowser_rpm_m2->setObjectName("textBrowser_rpm_m2");
        textBrowser_rpm_m2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_6->addWidget(textBrowser_rpm_m2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_5, 0, 10, 1, 1);

        groupBox_6 = new QGroupBox(groupBox_2);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setMinimumSize(QSize(0, 0));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName("gridLayout_7");
        textBrowser_current_m2 = new QTextBrowser(groupBox_6);
        textBrowser_current_m2->setObjectName("textBrowser_current_m2");
        textBrowser_current_m2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_7->addWidget(textBrowser_current_m2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_6, 1, 10, 1, 1);


        gridLayout_14->addWidget(groupBox_2, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        gridLayout_25 = new QGridLayout(tab_6);
        gridLayout_25->setObjectName("gridLayout_25");
        groupBox_13 = new QGroupBox(tab_6);
        groupBox_13->setObjectName("groupBox_13");
        gridLayout_15 = new QGridLayout(groupBox_13);
        gridLayout_15->setObjectName("gridLayout_15");
        groupBox_19 = new QGroupBox(groupBox_13);
        groupBox_19->setObjectName("groupBox_19");
        groupBox_19->setMinimumSize(QSize(0, 0));
        gridLayout_20 = new QGridLayout(groupBox_19);
        gridLayout_20->setObjectName("gridLayout_20");
        textBrowser_console = new QTextBrowser(groupBox_19);
        textBrowser_console->setObjectName("textBrowser_console");
        textBrowser_console->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_20->addWidget(textBrowser_console, 0, 0, 1, 1);


        gridLayout_15->addWidget(groupBox_19, 0, 9, 1, 1);


        gridLayout_25->addWidget(groupBox_13, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_6, QString());

        gridLayout_3->addWidget(tabWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName("gridLayout_2");
        line_3 = new QFrame(tab_2);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_3, 1, 1, 1, 1);

        groupBox_15 = new QGroupBox(tab_2);
        groupBox_15->setObjectName("groupBox_15");
        gridLayout_16 = new QGridLayout(groupBox_15);
        gridLayout_16->setObjectName("gridLayout_16");
        groupBox_17 = new QGroupBox(groupBox_15);
        groupBox_17->setObjectName("groupBox_17");
        groupBox_17->setMaximumSize(QSize(1000, 16777215));
        gridLayout_41 = new QGridLayout(groupBox_17);
        gridLayout_41->setObjectName("gridLayout_41");
        label_30 = new QLabel(groupBox_17);
        label_30->setObjectName("label_30");

        gridLayout_41->addWidget(label_30, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox_17);
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(120, 0));
        comboBox->setMaximumSize(QSize(200, 16777215));

        gridLayout_41->addWidget(comboBox, 4, 1, 1, 1);

        label_34 = new QLabel(groupBox_17);
        label_34->setObjectName("label_34");

        gridLayout_41->addWidget(label_34, 5, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_17);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(120, 0));
        lineEdit_4->setMaximumSize(QSize(200, 16777215));

        gridLayout_41->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_32 = new QLabel(groupBox_17);
        label_32->setObjectName("label_32");

        gridLayout_41->addWidget(label_32, 4, 0, 1, 1);

        label_29 = new QLabel(groupBox_17);
        label_29->setObjectName("label_29");

        gridLayout_41->addWidget(label_29, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_17);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(120, 0));
        comboBox_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_41->addWidget(comboBox_2, 5, 1, 1, 1);

        label_31 = new QLabel(groupBox_17);
        label_31->setObjectName("label_31");

        gridLayout_41->addWidget(label_31, 3, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_17);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(120, 0));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        gridLayout_41->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_17);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(120, 0));
        lineEdit_3->setMaximumSize(QSize(200, 16777215));

        gridLayout_41->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_17);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(120, 0));
        lineEdit_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_41->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_33 = new QLabel(groupBox_17);
        label_33->setObjectName("label_33");
        label_33->setMaximumSize(QSize(300, 16777215));

        gridLayout_41->addWidget(label_33, 2, 0, 1, 1);


        gridLayout_16->addWidget(groupBox_17, 0, 1, 1, 1);

        groupBox_16 = new QGroupBox(groupBox_15);
        groupBox_16->setObjectName("groupBox_16");
        gridLayout_18 = new QGridLayout(groupBox_16);
        gridLayout_18->setObjectName("gridLayout_18");
        line_77 = new QFrame(groupBox_16);
        line_77->setObjectName("line_77");
        line_77->setFrameShape(QFrame::Shape::HLine);
        line_77->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_77, 1, 5, 1, 1);

        motor3Slider = new QSlider(groupBox_16);
        motor3Slider->setObjectName("motor3Slider");
        motor3Slider->setMaximum(100);
        motor3Slider->setSingleStep(10);
        motor3Slider->setOrientation(Qt::Vertical);

        gridLayout_18->addWidget(motor3Slider, 2, 6, 1, 1);

        line_75 = new QFrame(groupBox_16);
        line_75->setObjectName("line_75");
        line_75->setMinimumSize(QSize(100, 0));
        line_75->setMaximumSize(QSize(1000, 16777215));
        line_75->setFrameShape(QFrame::Shape::HLine);
        line_75->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_75, 2, 0, 1, 1);

        motor2Slider = new QSlider(groupBox_16);
        motor2Slider->setObjectName("motor2Slider");
        motor2Slider->setMaximum(100);
        motor2Slider->setSingleStep(10);
        motor2Slider->setOrientation(Qt::Vertical);

        gridLayout_18->addWidget(motor2Slider, 2, 4, 1, 1);

        motor1Slider = new QSlider(groupBox_16);
        motor1Slider->setObjectName("motor1Slider");
        motor1Slider->setMinimumSize(QSize(0, 0));
        motor1Slider->setMaximum(100);
        motor1Slider->setSingleStep(10);
        motor1Slider->setPageStep(10);
        motor1Slider->setOrientation(Qt::Vertical);

        gridLayout_18->addWidget(motor1Slider, 2, 2, 1, 1);

        line_6 = new QFrame(groupBox_16);
        line_6->setObjectName("line_6");
        line_6->setMinimumSize(QSize(0, 60));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_6, 0, 2, 1, 1);

        motor4ControlLabel = new QLabel(groupBox_16);
        motor4ControlLabel->setObjectName("motor4ControlLabel");
        motor4ControlLabel->setMinimumSize(QSize(44, 0));

        gridLayout_18->addWidget(motor4ControlLabel, 1, 8, 1, 1);

        line_7 = new QFrame(groupBox_16);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_7, 0, 4, 1, 1);

        line_76 = new QFrame(groupBox_16);
        line_76->setObjectName("line_76");
        line_76->setFrameShape(QFrame::Shape::HLine);
        line_76->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_76, 1, 3, 1, 1);

        line_78 = new QFrame(groupBox_16);
        line_78->setObjectName("line_78");
        line_78->setFrameShape(QFrame::Shape::HLine);
        line_78->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_78, 1, 7, 1, 1);

        label_4 = new QLabel(groupBox_16);
        label_4->setObjectName("label_4");

        gridLayout_18->addWidget(label_4, 3, 8, 1, 1);

        motor4Slider = new QSlider(groupBox_16);
        motor4Slider->setObjectName("motor4Slider");
        motor4Slider->setMaximum(100);
        motor4Slider->setSingleStep(10);
        motor4Slider->setOrientation(Qt::Vertical);

        gridLayout_18->addWidget(motor4Slider, 2, 8, 1, 1);

        line_13 = new QFrame(groupBox_16);
        line_13->setObjectName("line_13");
        line_13->setMinimumSize(QSize(0, 60));
        line_13->setFrameShape(QFrame::Shape::VLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_13, 4, 8, 1, 1);

        line_9 = new QFrame(groupBox_16);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::Shape::VLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_9, 0, 8, 1, 1);

        label_2 = new QLabel(groupBox_16);
        label_2->setObjectName("label_2");

        gridLayout_18->addWidget(label_2, 3, 4, 1, 1);

        line_8 = new QFrame(groupBox_16);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_8, 0, 6, 1, 1);

        motor3ControlLabel = new QLabel(groupBox_16);
        motor3ControlLabel->setObjectName("motor3ControlLabel");
        motor3ControlLabel->setMinimumSize(QSize(44, 0));

        gridLayout_18->addWidget(motor3ControlLabel, 1, 6, 1, 1);

        motor2ControlLabel = new QLabel(groupBox_16);
        motor2ControlLabel->setObjectName("motor2ControlLabel");
        motor2ControlLabel->setMinimumSize(QSize(44, 0));

        gridLayout_18->addWidget(motor2ControlLabel, 1, 4, 1, 1);

        label = new QLabel(groupBox_16);
        label->setObjectName("label");

        gridLayout_18->addWidget(label, 3, 2, 1, 1);

        line_74 = new QFrame(groupBox_16);
        line_74->setObjectName("line_74");
        line_74->setMinimumSize(QSize(100, 0));
        line_74->setMaximumSize(QSize(1000, 16777215));
        line_74->setFrameShape(QFrame::Shape::HLine);
        line_74->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_74, 2, 10, 1, 1);

        line_12 = new QFrame(groupBox_16);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::VLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_12, 4, 6, 1, 1);

        line_11 = new QFrame(groupBox_16);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_11, 4, 4, 1, 1);

        motor1ControlLabel = new QLabel(groupBox_16);
        motor1ControlLabel->setObjectName("motor1ControlLabel");
        motor1ControlLabel->setMinimumSize(QSize(44, 0));

        gridLayout_18->addWidget(motor1ControlLabel, 1, 2, 1, 1);

        line_79 = new QFrame(groupBox_16);
        line_79->setObjectName("line_79");
        line_79->setFrameShape(QFrame::Shape::HLine);
        line_79->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_79, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_16);
        label_3->setObjectName("label_3");

        gridLayout_18->addWidget(label_3, 3, 6, 1, 1);

        line_10 = new QFrame(groupBox_16);
        line_10->setObjectName("line_10");
        line_10->setMinimumSize(QSize(0, 60));
        line_10->setAutoFillBackground(false);
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_10, 4, 2, 1, 1);

        line_80 = new QFrame(groupBox_16);
        line_80->setObjectName("line_80");
        line_80->setFrameShape(QFrame::Shape::HLine);
        line_80->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_18->addWidget(line_80, 2, 9, 1, 1);


        gridLayout_16->addWidget(groupBox_16, 0, 0, 1, 1);

        groupBox_18 = new QGroupBox(groupBox_15);
        groupBox_18->setObjectName("groupBox_18");
        gridLayout_19 = new QGridLayout(groupBox_18);
        gridLayout_19->setObjectName("gridLayout_19");
        slidersButton = new QPushButton(groupBox_18);
        slidersButton->setObjectName("slidersButton");

        gridLayout_19->addWidget(slidersButton, 0, 0, 1, 1);

        line_4 = new QFrame(groupBox_18);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_19->addWidget(line_4, 0, 1, 1, 1);


        gridLayout_16->addWidget(groupBox_18, 1, 0, 1, 1);

        groupBox_14 = new QGroupBox(groupBox_15);
        groupBox_14->setObjectName("groupBox_14");
        gridLayout_42 = new QGridLayout(groupBox_14);
        gridLayout_42->setObjectName("gridLayout_42");
        pushButton = new QPushButton(groupBox_14);
        pushButton->setObjectName("pushButton");

        gridLayout_42->addWidget(pushButton, 0, 0, 1, 1);

        line_5 = new QFrame(groupBox_14);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_42->addWidget(line_5, 0, 1, 1, 1);


        gridLayout_16->addWidget(groupBox_14, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_15, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        maxMotorSignalBox = new QComboBox(tab_3);
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->addItem(QString());
        maxMotorSignalBox->setObjectName("maxMotorSignalBox");
        maxMotorSignalBox->setGeometry(QRect(30, 70, 82, 28));
        saveSettingsButton = new QPushButton(tab_3);
        saveSettingsButton->setObjectName("saveSettingsButton");
        saveSettingsButton->setGeometry(QRect(50, 350, 83, 29));
        tabWidget->addTab(tab_3, QString());

        gridLayout_17->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1024, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Pomiar", nullptr));
        groupBox->setTitle(QString());
        resetDataButton->setText(QCoreApplication::translate("MainWindow", "Resetuj", nullptr));
        exportDataButton->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        clearLogBoxButton->setText(QCoreApplication::translate("MainWindow", "Czy\305\233\304\207 logi", nullptr));
        recordDataButton->setText(QCoreApplication::translate("MainWindow", "Nagrywaj", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "current m1", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "rpm m1", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "temp battery", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "current m3", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "curren m4", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "temp ambient", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "rpm m4", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "rpm m3", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "rpm m2", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "current m2", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Wyniki", nullptr));
        groupBox_13->setTitle(QString());
        groupBox_19->setTitle(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Konsola", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Dane", nullptr));
        groupBox_15->setTitle(QString());
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "Badanie", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Krok ci\304\205gu [%]", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Zapisz po zako\305\204czeniu", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Odwr\303\263\304\207 przy max", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Krok czasu [s]", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Liczba krok\303\263w", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Max ci\304\205g [%]", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("MainWindow", "Zdalne sterowanie", nullptr));
        motor4ControlLabel->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "m4", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "m2", nullptr));
        motor3ControlLabel->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        motor2ControlLabel->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "m1", nullptr));
        motor1ControlLabel->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "m3", nullptr));
        groupBox_18->setTitle(QString());
        slidersButton->setText(QCoreApplication::translate("MainWindow", "Razem", nullptr));
        groupBox_14->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Rozpocznij", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Sterowanie", nullptr));
        maxMotorSignalBox->setItemText(0, QCoreApplication::translate("MainWindow", "40", nullptr));
        maxMotorSignalBox->setItemText(1, QCoreApplication::translate("MainWindow", "50", nullptr));
        maxMotorSignalBox->setItemText(2, QCoreApplication::translate("MainWindow", "60", nullptr));
        maxMotorSignalBox->setItemText(3, QCoreApplication::translate("MainWindow", "70", nullptr));
        maxMotorSignalBox->setItemText(4, QCoreApplication::translate("MainWindow", "80", nullptr));
        maxMotorSignalBox->setItemText(5, QCoreApplication::translate("MainWindow", "90", nullptr));
        maxMotorSignalBox->setItemText(6, QCoreApplication::translate("MainWindow", "100", nullptr));

        saveSettingsButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Ustawienia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
