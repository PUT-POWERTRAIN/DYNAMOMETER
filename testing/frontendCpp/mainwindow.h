#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextBrowser>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //ADDED FUNCTIONS
    void clearTextBoxes();
    void printLogBox();
    void resetData();
    void showDataInLogBox();
    void recordData();
    void saveToCSV();
private:
    Ui::MainWindow *ui;
    std::array<QTextBrowser*, 10> textBrowsers;
};
#endif // MAINWINDOW_H
