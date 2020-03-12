#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(1000,600);
    this->setFixedSize(1000,600);

    file1.setFileName("file1.txt");
    file2.setFileName("file2.txt");
    file3.setFileName("file3.txt");
    if(!file1.exists())
    {
        file1.open(QIODevice::WriteOnly);
        file1.close();
    }
    if(!file2.exists())
    {
        file2.open(QIODevice::WriteOnly);
        file2.close();
    }
    if(!file3.exists())
    {
        file3.open(QIODevice::WriteOnly);
        file3.close();
    }
    file1.open(QIODevice::ReadWrite);
    file2.open(QIODevice::ReadWrite);
    file3.open(QIODevice::ReadWrite);
    while (!file1.atEnd())
    {
        QStringList lst = QString(file1.readLine()).split(" ");
        first x;
        x.order_id = lst[0].toInt();
        QStringList s = lst[1].split(".");
        x.date.setDate(s[2].toInt(),s[1].toInt(),s[0].toInt());
        x.phone = lst[2];
        x.email = lst[3];
        x.email.resize(x.email.size()-2);
        order.push_back(x);
        ui->comboBox_order_id->addItem(lst[0],x.order_id);
        ui->comboBox_order_id_2->addItem(lst[0],x.order_id);
    }
    while (!file2.atEnd())
    {
        QStringList lst = QString(file2.readLine()).split(" ");
        second x;
        x.order_id = lst[0].toInt();
        x.product_id = lst[1].toInt();
        lst[2].resize(lst[2].length()-2);
        x.amount = lst[2].toInt();
        list.push_back(x);
    }
    while (!file3.atEnd())
    {
        QStringList lst = QString(file3.readLine()).split(" ");
        third x;
        x.product_id = lst[0].toInt();
        x.price_for_one = lst[1].toInt();
        x.name = lst[2];
        x.name.resize(x.name.size()-2);
        product.push_back(x);
        ui->comboBox_product_id->addItem(lst[0],x.product_id);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_calendar_clicked(const QDate &date)
{
    ui->date->setDate(date);
}

void MainWindow::on_date_userDateChanged(const QDate &date)
{
    ui->calendar->setSelectedDate(date);
}

void MainWindow::on_add_order_clicked()
{
    first x;
    x.order_id = ui->order_id->text().toInt();
    for (int i = 0;i<order.length();i++)
        if (order[i].order_id==x.order_id)
        {
            QMessageBox::critical(this, "Error","id duplicate");
            return;
        }
    if (ui->date->text()=="")
    {
        QMessageBox::critical(this, "Error","Date is empty");
        return;
    }
    QStringList s = ui->date->text().split(".");
    x.date.setDate(s[2].toInt(),s[1].toInt(),s[0].toInt());
    if (ui->phone->text()=="")
    {
        QMessageBox::critical(this, "Error","Phone is empty");
        return;
    }
    if (ui->phone->text()[0]!='+' || ui->phone->text().length()<=8)
    {
        QMessageBox::critical(this, "Error","Phone is invalid");
        return;
    }
    x.phone = ui->phone->text();
    if (ui->email->text()=="")
    {
        QMessageBox::critical(this, "Error","Email is empty");
        return;
    }
    int sab = 0;
    for (int i = 0;i<ui->email->text().length();i++)
        if (ui->email->text()[i]=='@') sab++;
    if (sab!=1 || ui->email->text()[0]=='@' || ui->email->text()[ui->email->text().length()-1]=='@')
    {
        QMessageBox::critical(this, "Error","Email is invalid");
        return;
    }
    x.email = ui->email->text();
    order.push_back(x);
    char a[10000] = {};
    strcat(a, ui->order_id->text().toUtf8());
    strcat(a,' ' + ui->date->text().toUtf8());
    strcat(a,' ' + ui->phone->text().toUtf8());
    strcat(a,' ' + ui->email->text().toUtf8() + '\r' +'\n');
    file1.write(a);
    ui->comboBox_order_id->addItem((QString)ui->order_id->text(),x.order_id);
    ui->comboBox_order_id_2->addItem((QString)ui->order_id->text(),x.order_id);
    QMessageBox::information(this, "Well done","Order added successfully");
}

void MainWindow::on_add_product_list_clicked()
{
    second x;
    x.order_id = ui->comboBox_order_id->currentText().toInt();
    if (x.order_id<=0 || x.order_id>=100)
    {
        QMessageBox::critical(this, "Error","Wrong order id");
        return;
    }
    x.product_id = ui->comboBox_product_id->currentText().toInt();
    if (x.product_id<=0 || x.product_id>=100)
    {
        QMessageBox::critical(this, "Error","Wrong product id");
        return;
    }
    x.amount = ui->amount_of_product->text().toInt();
    if (x.amount<=0)
    {
        QMessageBox::critical(this, "Error","Wrong amount");
        return;
    }
    list.push_back(x);
    char a[10000] = {};
    strcat(a, ui->comboBox_order_id->currentText().toUtf8());
    strcat(a,' ' + ui->comboBox_product_id->currentText().toUtf8());
    strcat(a,' ' + ui->amount_of_product->text().toUtf8() + '\r' +'\n');
    file2.write(a);
    QMessageBox::information(this, "Well done","Order list added successfully");
}

void MainWindow::on_add_product_clicked()
{
    third x;
    x.product_id = ui->product_id->text().toInt();
    for (int i = 0;i<product.length();i++)
        if (product[i].product_id==x.product_id)
        {
            QMessageBox::critical(this, "Error","id duplicate");
            return;
        }
    x.price_for_one = ui->price_for_one->text().toInt();
    if (x.price_for_one<=0)
    {
        QMessageBox::critical(this, "Error","Price is invalid");
        return;
    }
    x.name = ui->name->text();
    if (x.name=="")
    {
        QMessageBox::critical(this, "Error","Name is empty");
        return;
    }
    product.push_back(x);
    char a[10000] = {};
    strcat(a, ui->product_id->text().toUtf8());
    strcat(a,' ' + ui->price_for_one->text().toUtf8());
    strcat(a,' ' + ui->name->text().toUtf8() + '\r' +'\n');
    file3.write(a);
    ui->comboBox_product_id->addItem((QString)ui->product_id->text(),x.product_id);
    QMessageBox::information(this, "Well done","Product added successfully");
}

void MainWindow::on_comboBox_order_id_2_activated(const QString &arg1)
{
    QStandardItemModel *model = new QStandardItemModel;
    QStandardItem *item;
    QStringList horizontalHeader;
     horizontalHeader.append("Name");
     horizontalHeader.append("Amount");
     horizontalHeader.append("Price for one");
     model->setHorizontalHeaderLabels(horizontalHeader);
     int k = 0,sum = 0;
    for (int i = 0;i<list.length();i++)
        if (list[i].order_id==arg1.toInt())
            for (int j = 0;j<product.length();j++)
                if (list[i].product_id==product[j].product_id)
                  {
                    item = new QStandardItem(product[j].name);
                    model->setItem(k,0,item);

                    item = new QStandardItem(QString::number(list[i].amount));
                    model->setItem(k,1,item);

                    item = new QStandardItem(QString::number(product[j].price_for_one));
                    model->setItem(k,2,item);
                    sum+=product[j].price_for_one*list[i].amount;
                    k++;
                  }
    ui->tableView->setModel(model);

    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->out_total_cost->setText(QString::number(sum)+"$");
    for (int i = 0;i<order.length();i++)
        if (order[i].order_id==arg1.toInt())
        {
            ui->out_phone->setText(order[i].phone);
            ui->out_email->setText(order[i].email);
            ui->out_date->setText(order[i].date.toString());
            break;
        }

}












