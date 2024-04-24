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

        self.ui.exitButton.clicked.connect(exit_function)

        #TRANSLATION
        def transolationFunction():
            if self.ui.LanguageBox.currentIndex() == 0:
                self.ui.tabWidget.setTabText(0, "Pomiar")
                self.ui.tabWidget.setTabText(1, "Łączenie")
                self.ui.tabWidget.setTabText(2, "Badanie")
                self.ui.tabWidget.setTabText(3, "Ustawienia")
            elif self.ui.LanguageBox.currentIndex() == 1:
                self.ui.tabWidget.setTabText(0, "Main")
                self.ui.tabWidget.setTabText(1, "Connection")
                self.ui.tabWidget.setTabText(2, "Analysis")
                self.ui.tabWidget.setTabText(3, "Settings")

        self.ui.LanguageBox.currentIndexChanged.connect(transolationFunction)
        self.ui.LanguageBox.setCurrentIndex(1)



        #BORDERLESS
        self.setWindowFlags(Qt.FramelessWindowHint)


if __name__ == "__main__":

    app = QApplication(sys.argv)
    widget = MainWindow()
    widget.show()
    sys.exit(app.exec())
