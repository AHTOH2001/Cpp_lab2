#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include <QDate>
#include "QStandardItemModel"
#include "QStandardItem"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_calendar_clicked(const QDate &date);

    void on_date_userDateChanged(const QDate &date);

    void on_add_order_clicked();

    void on_add_product_clicked();

    void on_add_product_list_clicked();

    void on_comboBox_order_id_2_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    struct first{
        int order_id;
        QDate date;
        QString phone,email;
    };
    struct second{
        int order_id,product_id,amount;
    };
    struct third{
        int product_id,price_for_one;
        QString name;
    };

    QVector <first> order;
    QVector <second> list;
    QVector <third> product;
    QFile file1,file2,file3;
};
#endif // MAINWINDOW_H
