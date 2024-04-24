# PUT POWERTRAIN 2024
# WIKTOR PREUSS
# This Python file uses the following encoding: utf-8
import sys

from PySide6.QtWidgets import QApplication, QMainWindow
from PySide6.QtCore import Qt

# Important:
# You need to run the following command to generate the ui_form.py file
#     pyside6-uic form.ui -o ui_form.py, or
#     pyside2-uic form.ui -o ui_form.py
from ui_form import Ui_MainWindow

class Translation(QMainWindow):
        @staticmethod
        def translateToPolish(ui):
            ui.tabWidget.setTabText(0, "Pomiar")
            ui.tabWidget.setTabText(1, "Łączenie")
            ui.tabWidget.setTabText(2, "Badanie")
            ui.tabWidget.setTabText(3, "Ustawienia")

            ui.LanguageLabel.setText("Język")
            ui.ThemeLabel.setText("Motyw")
            ui.FontLabel.setText("Czcionka")
            ui.FontSizeLabel.setText("Rozmiar")
            ui.MotorLimitLabel.setText("Limit Ciągu")

            ui.SaveSettingsButton.setText("Zapisz")
            ui.DefaultSettingsButton.setText("Domyślne")
            ui.GeneralSettingsGroupBox.setTitle("Głowne Ustawienia")
            ui.FontSettingsGroupBox.setTitle("Ustawienia Czcionki")
            ui.ConnectionSettingsGroupBox.setTitle("Ustawienia Połączenia")
            ui.MotorSettingsGroupBox.setTitle("Ustawienia Kontroli Silników")

        @staticmethod
        def translateToEnglish(ui):
            ui.tabWidget.setTabText(0, "Main")
            ui.tabWidget.setTabText(1, "Connection")
            ui.tabWidget.setTabText(2, "Analysis")
            ui.tabWidget.setTabText(3, "Settings")

            ui.LanguageLabel.setText("Language")
            ui.ThemeLabel.setText("Theme")
            ui.FontLabel.setText("Font")
            ui.FontSizeLabel.setText("Font Size")
            ui.MotorLimitLabel.setText("Motor Limit")

            ui.SaveSettingsButton.setText("Save")
            ui.DefaultSettingsButton.setText("Default")
            ui.GeneralSettingsGroupBox.setTitle("Main Settings")
            ui.FontSettingsGroupBox.setTitle("Font Settings")
            ui.ConnectionSettingsGroupBox.setTitle("Connection Settings")
            ui.MotorSettingsGroupBox.setTitle("Motor Control Settings")


class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        global thereIsNotSavedData
        thereIsNotSavedData = False

        #BUTTON FUNCTIONS
        def exit_function():
            if thereIsNotSavedData:
                pass
            else:
                self.close()

        def save_settings_function():
            if self.ui.LanguageBox.currentIndex() == 0:
                Translation.translateToPolish(self.ui)
            elif self.ui.LanguageBox.currentIndex() == 1:
                Translation.translateToEnglish(self.ui)

        def default_settings_function():
            self.ui.LanguageBox.setCurrentIndex(1)
            self.ui.ThemeBox.setCurrentIndex(0)
            self.ui.FontSizeBox.setCurrentIndex(1)
            self.ui.FontComboBox.setCurrentIndex(0)
            self.ui.IPBox.setCurrentIndex(0)
            self.ui.PortBox.setCurrentIndex(0)
            self.ui.MotorLimitBox.setCurrentIndex(3)
            save_settings_function()


        self.ui.exitButton.clicked.connect(exit_function)
        self.ui.SaveSettingsButton.clicked.connect(save_settings_function)
        self.ui.DefaultSettingsButton.clicked.connect(default_settings_function)

        self.ui.LanguageBox.setCurrentIndex(1)

        #BORDERLESS
        self.setWindowFlags(Qt.FramelessWindowHint)


if __name__ == "__main__":

    app = QApplication(sys.argv)
    widget = MainWindow()
    widget.show()
    sys.exit(app.exec())
