#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    auto geo = ui->groupBox_2->geometry();
    ui->groupBox_2->setGeometry(geo.x(),geo.y(),arg1,geo.height());
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    auto geo = ui->groupBox_2->geometry();
    ui->groupBox_2->setGeometry(geo.x(),geo.y(), geo.width(), arg1);
}
