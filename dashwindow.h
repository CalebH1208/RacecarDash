#ifndef DASHWINDOW_H
#define DASHWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DashWindow; }
QT_END_NAMESPACE

class DashWindow : public QMainWindow
{
    Q_OBJECT

public:
    DashWindow(QWidget *parent = nullptr);
    ~DashWindow();

private:
    Ui::DashWindow *ui;
};
#endif // DASHWINDOW_H
