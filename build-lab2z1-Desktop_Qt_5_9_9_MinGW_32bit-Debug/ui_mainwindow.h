/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *comboBox_order_id;
    QComboBox *comboBox_product_id;
    QLabel *label_9;
    QLineEdit *amount_of_product;
    QPushButton *add_product_list;
    QLabel *label_7;
    QLabel *label_8;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *order_id;
    QLabel *label_3;
    QDateEdit *date;
    QLabel *label_4;
    QLineEdit *phone;
    QLabel *label_5;
    QLineEdit *email;
    QPushButton *add_order;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *name;
    QPushButton *add_product;
    QSpinBox *product_id;
    QLineEdit *price_for_one;
    QCalendarWidget *calendar;
    QTableView *tableView;
    QComboBox *comboBox_order_id_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QLineEdit *out_total_cost;
    QLabel *label_14;
    QLineEdit *out_email;
    QLineEdit *out_phone;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *out_date;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 241, 472));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        comboBox_order_id = new QComboBox(gridLayoutWidget);
        comboBox_order_id->setObjectName(QStringLiteral("comboBox_order_id"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_order_id);

        comboBox_product_id = new QComboBox(gridLayoutWidget);
        comboBox_product_id->setObjectName(QStringLiteral("comboBox_product_id"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox_product_id);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        amount_of_product = new QLineEdit(gridLayoutWidget);
        amount_of_product->setObjectName(QStringLiteral("amount_of_product"));
        amount_of_product->setMaxLength(5);
        amount_of_product->setClearButtonEnabled(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, amount_of_product);

        add_product_list = new QPushButton(gridLayoutWidget);
        add_product_list->setObjectName(QStringLiteral("add_product_list"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, add_product_list);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        order_id = new QSpinBox(gridLayoutWidget);
        order_id->setObjectName(QStringLiteral("order_id"));

        formLayout->setWidget(1, QFormLayout::FieldRole, order_id);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        date = new QDateEdit(gridLayoutWidget);
        date->setObjectName(QStringLiteral("date"));
        date->setDateTime(QDateTime(QDate(2020, 9, 10), QTime(0, 0, 0)));

        formLayout->setWidget(2, QFormLayout::FieldRole, date);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        phone = new QLineEdit(gridLayoutWidget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setMaxLength(11);
        phone->setClearButtonEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, phone);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        email = new QLineEdit(gridLayoutWidget);
        email->setObjectName(QStringLiteral("email"));
        email->setMaxLength(30);
        email->setClearButtonEnabled(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, email);

        add_order = new QPushButton(gridLayoutWidget);
        add_order->setObjectName(QStringLiteral("add_order"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, add_order);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_13);

        name = new QLineEdit(gridLayoutWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setMaxLength(30);
        name->setClearButtonEnabled(true);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, name);

        add_product = new QPushButton(gridLayoutWidget);
        add_product->setObjectName(QStringLiteral("add_product"));

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, add_product);

        product_id = new QSpinBox(gridLayoutWidget);
        product_id->setObjectName(QStringLiteral("product_id"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, product_id);

        price_for_one = new QLineEdit(gridLayoutWidget);
        price_for_one->setObjectName(QStringLiteral("price_for_one"));
        price_for_one->setInputMethodHints(Qt::ImhDigitsOnly);
        price_for_one->setMaxLength(5);
        price_for_one->setClearButtonEnabled(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, price_for_one);


        gridLayout->addLayout(formLayout_3, 2, 0, 1, 1);

        calendar = new QCalendarWidget(centralwidget);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setGeometry(QRect(340, 20, 376, 218));
        calendar->setSelectedDate(QDate(2020, 9, 10));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(340, 270, 376, 281));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSortingEnabled(false);
        comboBox_order_id_2 = new QComboBox(centralwidget);
        comboBox_order_id_2->setObjectName(QStringLiteral("comboBox_order_id_2"));
        comboBox_order_id_2->setGeometry(QRect(340, 250, 81, 22));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(730, 270, 261, 281));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 1, 0, 1, 1);

        out_total_cost = new QLineEdit(gridLayoutWidget_2);
        out_total_cost->setObjectName(QStringLiteral("out_total_cost"));
        out_total_cost->setReadOnly(true);

        gridLayout_2->addWidget(out_total_cost, 0, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        out_email = new QLineEdit(gridLayoutWidget_2);
        out_email->setObjectName(QStringLiteral("out_email"));
        out_email->setReadOnly(true);

        gridLayout_2->addWidget(out_email, 2, 1, 1, 1);

        out_phone = new QLineEdit(gridLayoutWidget_2);
        out_phone->setObjectName(QStringLiteral("out_phone"));
        out_phone->setReadOnly(true);

        gridLayout_2->addWidget(out_phone, 1, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 2, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 3, 0, 1, 1);

        out_date = new QLineEdit(gridLayoutWidget_2);
        out_date->setObjectName(QStringLiteral("out_date"));
        out_date->setReadOnly(true);

        gridLayout_2->addWidget(out_date, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(add_product_list);
        label_9->setBuddy(amount_of_product);
        label_7->setBuddy(comboBox_product_id);
        label_8->setBuddy(comboBox_order_id);
        label->setBuddy(add_order);
        label_2->setBuddy(order_id);
        label_3->setBuddy(date);
        label_4->setBuddy(phone);
        label_5->setBuddy(email);
        label_10->setBuddy(add_product);
        label_11->setBuddy(product_id);
        label_12->setBuddy(price_for_one);
        label_13->setBuddy(name);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(order_id, date);
        QWidget::setTabOrder(date, phone);
        QWidget::setTabOrder(phone, email);
        QWidget::setTabOrder(email, add_order);
        QWidget::setTabOrder(add_order, comboBox_order_id);
        QWidget::setTabOrder(comboBox_order_id, comboBox_product_id);
        QWidget::setTabOrder(comboBox_product_id, amount_of_product);
        QWidget::setTabOrder(amount_of_product, add_product_list);
        QWidget::setTabOrder(add_product_list, product_id);
        QWidget::setTabOrder(product_id, price_for_one);
        QWidget::setTabOrder(price_for_one, name);
        QWidget::setTabOrder(name, add_product);
        QWidget::setTabOrder(add_product, calendar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Product list:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Amout of product:", Q_NULLPTR));
        add_product_list->setText(QApplication::translate("MainWindow", "Add product list", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Product id:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Order id:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Order:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "id:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Date:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Customer phone:", Q_NULLPTR));
        phone->setInputMask(QString());
        phone->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Customer e-mail:", Q_NULLPTR));
        add_order->setText(QApplication::translate("MainWindow", "Add order", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Product:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "id:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Price for one:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        add_product->setText(QApplication::translate("MainWindow", "Add product", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Customer phone:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Total cost:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Customer email:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Date of order:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
