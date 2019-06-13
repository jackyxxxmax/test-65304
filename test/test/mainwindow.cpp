#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(button_pressed()));
    connect(this, SIGNAL(reach_max()), this, SLOT(reach_max_slot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addButton_clicked()
{
    ui->progressBar->setValue(ui->progressBar->value()+1);

}

void MainWindow::on_pushButton_clicked()
{
    ui->progressBar->setValue(ui->progressBar->value()-1);
}

void MainWindow::button_pressed()
{
    qDebug() << ui->progressBar->value();
    if(ui->progressBar->value() >= 100)
            emit reach_max();
}
void MainWindow::reach_max_slot()
{
    qDebug() << "Reach max value!";
}


