# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'form.ui'
##
## Created by: Qt User Interface Compiler version 6.7.0
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QComboBox, QFontComboBox, QGroupBox,
    QLabel, QMainWindow, QPushButton, QSizePolicy,
    QStatusBar, QTabWidget, QToolButton, QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(1024, 600)
        sizePolicy = QSizePolicy(QSizePolicy.Policy.Preferred, QSizePolicy.Policy.Preferred)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(MainWindow.sizePolicy().hasHeightForWidth())
        MainWindow.setSizePolicy(sizePolicy)
        MainWindow.setMaximumSize(QSize(1024, 600))
        palette = QPalette()
        brush = QBrush(QColor(255, 255, 255, 255))
        brush.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.WindowText, brush)
        brush1 = QBrush(QColor(27, 27, 27, 255))
        brush1.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Button, brush1)
        brush2 = QBrush(QColor(40, 40, 40, 255))
        brush2.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Light, brush2)
        brush3 = QBrush(QColor(33, 33, 33, 255))
        brush3.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Midlight, brush3)
        brush4 = QBrush(QColor(13, 13, 13, 255))
        brush4.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Dark, brush4)
        brush5 = QBrush(QColor(18, 18, 18, 255))
        brush5.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Mid, brush5)
        palette.setBrush(QPalette.Active, QPalette.Text, brush)
        palette.setBrush(QPalette.Active, QPalette.BrightText, brush)
        palette.setBrush(QPalette.Active, QPalette.ButtonText, brush)
        brush6 = QBrush(QColor(0, 0, 0, 255))
        brush6.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.Base, brush6)
        palette.setBrush(QPalette.Active, QPalette.Window, brush1)
        palette.setBrush(QPalette.Active, QPalette.Shadow, brush6)
        palette.setBrush(QPalette.Active, QPalette.AlternateBase, brush4)
        brush7 = QBrush(QColor(255, 255, 220, 255))
        brush7.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Active, QPalette.ToolTipBase, brush7)
        palette.setBrush(QPalette.Active, QPalette.ToolTipText, brush6)
        brush8 = QBrush(QColor(255, 255, 255, 127))
        brush8.setStyle(Qt.SolidPattern)
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette.Active, QPalette.PlaceholderText, brush8)
#endif
        palette.setBrush(QPalette.Active, QPalette.Accent, brush6)
        palette.setBrush(QPalette.Inactive, QPalette.WindowText, brush)
        palette.setBrush(QPalette.Inactive, QPalette.Button, brush1)
        palette.setBrush(QPalette.Inactive, QPalette.Light, brush2)
        palette.setBrush(QPalette.Inactive, QPalette.Midlight, brush3)
        palette.setBrush(QPalette.Inactive, QPalette.Dark, brush4)
        palette.setBrush(QPalette.Inactive, QPalette.Mid, brush5)
        palette.setBrush(QPalette.Inactive, QPalette.Text, brush)
        palette.setBrush(QPalette.Inactive, QPalette.BrightText, brush)
        palette.setBrush(QPalette.Inactive, QPalette.ButtonText, brush)
        palette.setBrush(QPalette.Inactive, QPalette.Base, brush6)
        palette.setBrush(QPalette.Inactive, QPalette.Window, brush1)
        palette.setBrush(QPalette.Inactive, QPalette.Shadow, brush6)
        palette.setBrush(QPalette.Inactive, QPalette.AlternateBase, brush4)
        palette.setBrush(QPalette.Inactive, QPalette.ToolTipBase, brush7)
        palette.setBrush(QPalette.Inactive, QPalette.ToolTipText, brush6)
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette.Inactive, QPalette.PlaceholderText, brush8)
#endif
        palette.setBrush(QPalette.Inactive, QPalette.Accent, brush6)
        palette.setBrush(QPalette.Disabled, QPalette.WindowText, brush4)
        palette.setBrush(QPalette.Disabled, QPalette.Button, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.Light, brush2)
        palette.setBrush(QPalette.Disabled, QPalette.Midlight, brush3)
        palette.setBrush(QPalette.Disabled, QPalette.Dark, brush4)
        palette.setBrush(QPalette.Disabled, QPalette.Mid, brush5)
        palette.setBrush(QPalette.Disabled, QPalette.Text, brush4)
        palette.setBrush(QPalette.Disabled, QPalette.BrightText, brush)
        palette.setBrush(QPalette.Disabled, QPalette.ButtonText, brush4)
        palette.setBrush(QPalette.Disabled, QPalette.Base, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.Window, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.Shadow, brush6)
        palette.setBrush(QPalette.Disabled, QPalette.AlternateBase, brush1)
        palette.setBrush(QPalette.Disabled, QPalette.ToolTipBase, brush7)
        palette.setBrush(QPalette.Disabled, QPalette.ToolTipText, brush6)
        brush9 = QBrush(QColor(13, 13, 13, 127))
        brush9.setStyle(Qt.SolidPattern)
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette.Disabled, QPalette.PlaceholderText, brush9)
#endif
        brush10 = QBrush(QColor(19, 19, 19, 255))
        brush10.setStyle(Qt.SolidPattern)
        palette.setBrush(QPalette.Disabled, QPalette.Accent, brush10)
        MainWindow.setPalette(palette)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.tabWidget = QTabWidget(self.centralwidget)
        self.tabWidget.setObjectName(u"tabWidget")
        self.tabWidget.setGeometry(QRect(12, 20, 1000, 560))
        palette1 = QPalette()
        brush11 = QBrush(QColor(203, 203, 203, 255))
        brush11.setStyle(Qt.SolidPattern)
        palette1.setBrush(QPalette.Active, QPalette.Light, brush11)
        brush12 = QBrush(QColor(26, 26, 26, 255))
        brush12.setStyle(Qt.SolidPattern)
        palette1.setBrush(QPalette.Active, QPalette.Mid, brush12)
        brush13 = QBrush(QColor(39, 39, 39, 255))
        brush13.setStyle(Qt.SolidPattern)
        palette1.setBrush(QPalette.Active, QPalette.Base, brush13)
        palette1.setBrush(QPalette.Inactive, QPalette.Light, brush11)
        palette1.setBrush(QPalette.Inactive, QPalette.Mid, brush12)
        palette1.setBrush(QPalette.Inactive, QPalette.Base, brush13)
        palette1.setBrush(QPalette.Disabled, QPalette.Light, brush11)
        palette1.setBrush(QPalette.Disabled, QPalette.Mid, brush12)
        self.tabWidget.setPalette(palette1)
        font = QFont()
        font.setPointSize(12)
        self.tabWidget.setFont(font)
        self.Main_tab = QWidget()
        self.Main_tab.setObjectName(u"Main_tab")
        self.tabWidget.addTab(self.Main_tab, "")
        self.Connection_tab = QWidget()
        self.Connection_tab.setObjectName(u"Connection_tab")
        self.tabWidget.addTab(self.Connection_tab, "")
        self.Analysis_tab = QWidget()
        self.Analysis_tab.setObjectName(u"Analysis_tab")
        self.tabWidget.addTab(self.Analysis_tab, "")
        self.Settings_tab = QWidget()
        self.Settings_tab.setObjectName(u"Settings_tab")
        self.LanguageBox = QComboBox(self.Settings_tab)
        self.LanguageBox.addItem("")
        self.LanguageBox.addItem("")
        self.LanguageBox.setObjectName(u"LanguageBox")
        self.LanguageBox.setGeometry(QRect(180, 60, 111, 41))
        font1 = QFont()
        font1.setPointSize(12)
        font1.setHintingPreference(QFont.PreferDefaultHinting)
        self.LanguageBox.setFont(font1)
        self.LanguageBox.setLayoutDirection(Qt.LeftToRight)
        self.LanguageLabel = QLabel(self.Settings_tab)
        self.LanguageLabel.setObjectName(u"LanguageLabel")
        self.LanguageLabel.setGeometry(QRect(20, 60, 111, 41))
        self.SaveSettingsButton = QPushButton(self.Settings_tab)
        self.SaveSettingsButton.setObjectName(u"SaveSettingsButton")
        self.SaveSettingsButton.setGeometry(QRect(10, 430, 171, 81))
        palette2 = QPalette()
        palette2.setBrush(QPalette.Active, QPalette.Shadow, brush)
        palette2.setBrush(QPalette.Active, QPalette.Accent, brush)
        palette2.setBrush(QPalette.Inactive, QPalette.Shadow, brush)
        palette2.setBrush(QPalette.Inactive, QPalette.Accent, brush)
        palette2.setBrush(QPalette.Disabled, QPalette.Shadow, brush)
        palette2.setBrush(QPalette.Disabled, QPalette.Accent, brush)
        self.SaveSettingsButton.setPalette(palette2)
        self.DefaultSettingsButton = QPushButton(self.Settings_tab)
        self.DefaultSettingsButton.setObjectName(u"DefaultSettingsButton")
        self.DefaultSettingsButton.setGeometry(QRect(200, 430, 171, 81))
        self.GeneralSettingsGroupBox = QGroupBox(self.Settings_tab)
        self.GeneralSettingsGroupBox.setObjectName(u"GeneralSettingsGroupBox")
        self.GeneralSettingsGroupBox.setGeometry(QRect(10, 30, 311, 131))
        self.ThemeLabel = QLabel(self.GeneralSettingsGroupBox)
        self.ThemeLabel.setObjectName(u"ThemeLabel")
        self.ThemeLabel.setGeometry(QRect(10, 80, 121, 41))
        self.ThemeBox = QComboBox(self.GeneralSettingsGroupBox)
        self.ThemeBox.addItem("")
        self.ThemeBox.setObjectName(u"ThemeBox")
        self.ThemeBox.setGeometry(QRect(170, 80, 111, 41))
        self.ThemeBox.setEditable(False)
        self.FontSettingsGroupBox = QGroupBox(self.Settings_tab)
        self.FontSettingsGroupBox.setObjectName(u"FontSettingsGroupBox")
        self.FontSettingsGroupBox.setGeometry(QRect(10, 200, 311, 131))
        self.FontSizeLabel = QLabel(self.FontSettingsGroupBox)
        self.FontSizeLabel.setObjectName(u"FontSizeLabel")
        self.FontSizeLabel.setGeometry(QRect(10, 80, 71, 41))
        self.FontComboBox = QFontComboBox(self.FontSettingsGroupBox)
        self.FontComboBox.setObjectName(u"FontComboBox")
        self.FontComboBox.setGeometry(QRect(130, 80, 171, 41))
        self.FontLabel = QLabel(self.FontSettingsGroupBox)
        self.FontLabel.setObjectName(u"FontLabel")
        self.FontLabel.setGeometry(QRect(10, 30, 61, 41))
        self.FontSizeBox = QComboBox(self.FontSettingsGroupBox)
        self.FontSizeBox.addItem("")
        self.FontSizeBox.addItem("")
        self.FontSizeBox.addItem("")
        self.FontSizeBox.addItem("")
        self.FontSizeBox.addItem("")
        self.FontSizeBox.addItem("")
        self.FontSizeBox.setObjectName(u"FontSizeBox")
        self.FontSizeBox.setGeometry(QRect(130, 30, 171, 41))
        self.FontSizeBox.setEditable(True)
        self.ConnectionSettingsGroupBox = QGroupBox(self.Settings_tab)
        self.ConnectionSettingsGroupBox.setObjectName(u"ConnectionSettingsGroupBox")
        self.ConnectionSettingsGroupBox.setGeometry(QRect(430, 30, 311, 131))
        self.IPLabel = QLabel(self.ConnectionSettingsGroupBox)
        self.IPLabel.setObjectName(u"IPLabel")
        self.IPLabel.setGeometry(QRect(10, 30, 51, 41))
        self.IPBox = QComboBox(self.ConnectionSettingsGroupBox)
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.addItem("")
        self.IPBox.setObjectName(u"IPBox")
        self.IPBox.setGeometry(QRect(130, 30, 171, 41))
        self.IPBox.setEditable(True)
        self.PortLabel = QLabel(self.ConnectionSettingsGroupBox)
        self.PortLabel.setObjectName(u"PortLabel")
        self.PortLabel.setGeometry(QRect(10, 80, 51, 41))
        self.PortBox = QComboBox(self.ConnectionSettingsGroupBox)
        self.PortBox.addItem("")
        self.PortBox.addItem("")
        self.PortBox.addItem("")
        self.PortBox.setObjectName(u"PortBox")
        self.PortBox.setGeometry(QRect(130, 80, 171, 41))
        self.PortBox.setEditable(True)
        self.MotorSettingsGroupBox = QGroupBox(self.Settings_tab)
        self.MotorSettingsGroupBox.setObjectName(u"MotorSettingsGroupBox")
        self.MotorSettingsGroupBox.setGeometry(QRect(430, 200, 311, 131))
        self.MotorLimitLabel = QLabel(self.MotorSettingsGroupBox)
        self.MotorLimitLabel.setObjectName(u"MotorLimitLabel")
        self.MotorLimitLabel.setGeometry(QRect(10, 30, 121, 41))
        self.MotorLimitBox = QComboBox(self.MotorSettingsGroupBox)
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.addItem("")
        self.MotorLimitBox.setObjectName(u"MotorLimitBox")
        self.MotorLimitBox.setGeometry(QRect(190, 30, 111, 41))
        self.MotorLimitBox.setEditable(False)
        self.tabWidget.addTab(self.Settings_tab, "")
        self.GeneralSettingsGroupBox.raise_()
        self.LanguageBox.raise_()
        self.LanguageLabel.raise_()
        self.SaveSettingsButton.raise_()
        self.DefaultSettingsButton.raise_()
        self.FontSettingsGroupBox.raise_()
        self.ConnectionSettingsGroupBox.raise_()
        self.MotorSettingsGroupBox.raise_()
        self.exitButton = QToolButton(self.centralwidget)
        self.exitButton.setObjectName(u"exitButton")
        self.exitButton.setGeometry(QRect(980, 10, 30, 30))
        icon = QIcon(QIcon.fromTheme(u"application-exit"))
        self.exitButton.setIcon(icon)
        self.exitButton.setIconSize(QSize(14, 14))
        MainWindow.setCentralWidget(self.centralwidget)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)

        self.tabWidget.setCurrentIndex(3)


        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MainWindow", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.Main_tab), QCoreApplication.translate("MainWindow", u"Main", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.Connection_tab), QCoreApplication.translate("MainWindow", u"Connection", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.Analysis_tab), QCoreApplication.translate("MainWindow", u"Analysis", None))
        self.LanguageBox.setItemText(0, QCoreApplication.translate("MainWindow", u" Polski", None))
        self.LanguageBox.setItemText(1, QCoreApplication.translate("MainWindow", u" English", None))

        self.LanguageBox.setCurrentText(QCoreApplication.translate("MainWindow", u" Polski", None))
        self.LanguageLabel.setText(QCoreApplication.translate("MainWindow", u"Language", None))
        self.SaveSettingsButton.setText(QCoreApplication.translate("MainWindow", u"Save", None))
        self.DefaultSettingsButton.setText(QCoreApplication.translate("MainWindow", u"Default", None))
        self.GeneralSettingsGroupBox.setTitle(QCoreApplication.translate("MainWindow", u"General Settings", None))
        self.ThemeLabel.setText(QCoreApplication.translate("MainWindow", u"Theme", None))
        self.ThemeBox.setItemText(0, QCoreApplication.translate("MainWindow", u"Dark", None))

        self.ThemeBox.setCurrentText(QCoreApplication.translate("MainWindow", u"Dark", None))
        self.FontSettingsGroupBox.setTitle(QCoreApplication.translate("MainWindow", u"Font Settings", None))
        self.FontSizeLabel.setText(QCoreApplication.translate("MainWindow", u"Font Size", None))
        self.FontLabel.setText(QCoreApplication.translate("MainWindow", u"Font", None))
        self.FontSizeBox.setItemText(0, QCoreApplication.translate("MainWindow", u"10", None))
        self.FontSizeBox.setItemText(1, QCoreApplication.translate("MainWindow", u"12", None))
        self.FontSizeBox.setItemText(2, QCoreApplication.translate("MainWindow", u"14", None))
        self.FontSizeBox.setItemText(3, QCoreApplication.translate("MainWindow", u"16", None))
        self.FontSizeBox.setItemText(4, QCoreApplication.translate("MainWindow", u"18", None))
        self.FontSizeBox.setItemText(5, QCoreApplication.translate("MainWindow", u"20", None))

        self.FontSizeBox.setCurrentText(QCoreApplication.translate("MainWindow", u"10", None))
        self.ConnectionSettingsGroupBox.setTitle(QCoreApplication.translate("MainWindow", u"Connection Settings", None))
        self.IPLabel.setText(QCoreApplication.translate("MainWindow", u"IP", None))
        self.IPBox.setItemText(0, QCoreApplication.translate("MainWindow", u"192.168.0.100", None))
        self.IPBox.setItemText(1, QCoreApplication.translate("MainWindow", u"192.168.0.101", None))
        self.IPBox.setItemText(2, QCoreApplication.translate("MainWindow", u"192.168.0.102", None))
        self.IPBox.setItemText(3, QCoreApplication.translate("MainWindow", u"192.168.0.103", None))
        self.IPBox.setItemText(4, QCoreApplication.translate("MainWindow", u"192.168.0.104", None))
        self.IPBox.setItemText(5, QCoreApplication.translate("MainWindow", u"192.168.0.105", None))
        self.IPBox.setItemText(6, QCoreApplication.translate("MainWindow", u"192.168.0.106", None))
        self.IPBox.setItemText(7, QCoreApplication.translate("MainWindow", u"192.168.0.107", None))
        self.IPBox.setItemText(8, QCoreApplication.translate("MainWindow", u"192.168.0.108", None))
        self.IPBox.setItemText(9, QCoreApplication.translate("MainWindow", u"192.168.0.109", None))
        self.IPBox.setItemText(10, QCoreApplication.translate("MainWindow", u"192.168.0.110", None))

        self.IPBox.setCurrentText(QCoreApplication.translate("MainWindow", u"192.168.0.100", None))
        self.PortLabel.setText(QCoreApplication.translate("MainWindow", u"Port", None))
        self.PortBox.setItemText(0, QCoreApplication.translate("MainWindow", u"12345", None))
        self.PortBox.setItemText(1, QCoreApplication.translate("MainWindow", u"12346", None))
        self.PortBox.setItemText(2, QCoreApplication.translate("MainWindow", u"12347", None))

        self.PortBox.setCurrentText(QCoreApplication.translate("MainWindow", u"12345", None))
        self.MotorSettingsGroupBox.setTitle(QCoreApplication.translate("MainWindow", u"Motor Control Settings", None))
        self.MotorLimitLabel.setText(QCoreApplication.translate("MainWindow", u"Motor Limit", None))
        self.MotorLimitBox.setItemText(0, QCoreApplication.translate("MainWindow", u" 40%", None))
        self.MotorLimitBox.setItemText(1, QCoreApplication.translate("MainWindow", u" 50%", None))
        self.MotorLimitBox.setItemText(2, QCoreApplication.translate("MainWindow", u" 60%", None))
        self.MotorLimitBox.setItemText(3, QCoreApplication.translate("MainWindow", u" 70%", None))
        self.MotorLimitBox.setItemText(4, QCoreApplication.translate("MainWindow", u" 80%", None))
        self.MotorLimitBox.setItemText(5, QCoreApplication.translate("MainWindow", u" 90%", None))
        self.MotorLimitBox.setItemText(6, QCoreApplication.translate("MainWindow", u" Off", None))

        self.MotorLimitBox.setCurrentText(QCoreApplication.translate("MainWindow", u" 40%", None))
        self.tabWidget.setTabText(self.tabWidget.indexOf(self.Settings_tab), QCoreApplication.translate("MainWindow", u"Settings", None))
        self.exitButton.setText(QCoreApplication.translate("MainWindow", u"...", None))
    # retranslateUi

