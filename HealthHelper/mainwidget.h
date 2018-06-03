#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QSystemTrayIcon>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    QSystemTrayIcon *mSysTrayIcon;

private slots:
    void on_pushButton_cancle_clicked();
    void on_pushButton_confirm_clicked();
    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason);
private:
    Ui::MainWidget *ui;
};

#endif // MAINWIDGET_H
