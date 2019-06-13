#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void button_pressed();

    void reach_max_slot();

signals:
    void reach_max();

private slots:
    void on_addButton_clicked();

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
