#include "dashwindow.h"
#include "./ui_dashwindow.h"

DashWindow::DashWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashWindow)
{
    ui->setupUi(this);
}

DashWindow::~DashWindow()
{
    delete ui;
}

