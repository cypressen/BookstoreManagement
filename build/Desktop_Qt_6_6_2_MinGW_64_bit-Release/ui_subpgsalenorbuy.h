/********************************************************************************
** Form generated from reading UI file 'subpgsalenorbuy.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBPGSALENORBUY_H
#define UI_SUBPGSALENORBUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubPGSaleNorBuy
{
public:
    QPushButton *PBRm;
    QPushButton *PBAdd;
    QPushButton *PBConfirm;
    QLineEdit *lineSearch;
    QTableWidget *bookListTable;
    QLabel *label_4;
    QLineEdit *lineAmount;
    QPushButton *PBSearchBook;
    QTableWidget *inventoryTable;
    QPushButton *PBCancel;
    QPushButton *PBUpdate;
    QLineEdit *lineName;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *SubPGSaleNorBuy)
    {
        if (SubPGSaleNorBuy->objectName().isEmpty())
            SubPGSaleNorBuy->setObjectName("SubPGSaleNorBuy");
        SubPGSaleNorBuy->resize(722, 581);
        SubPGSaleNorBuy->setAutoFillBackground(true);
        PBRm = new QPushButton(SubPGSaleNorBuy);
        PBRm->setObjectName("PBRm");
        PBRm->setGeometry(QRect(570, 180, 80, 23));
        PBAdd = new QPushButton(SubPGSaleNorBuy);
        PBAdd->setObjectName("PBAdd");
        PBAdd->setGeometry(QRect(460, 180, 80, 23));
        PBConfirm = new QPushButton(SubPGSaleNorBuy);
        PBConfirm->setObjectName("PBConfirm");
        PBConfirm->setGeometry(QRect(440, 248, 80, 61));
        lineSearch = new QLineEdit(SubPGSaleNorBuy);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(460, 140, 108, 23));
        bookListTable = new QTableWidget(SubPGSaleNorBuy);
        if (bookListTable->columnCount() < 3)
            bookListTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        bookListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        bookListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        bookListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        bookListTable->setObjectName("bookListTable");
        bookListTable->setGeometry(QRect(13, 9, 311, 131));
        label_4 = new QLabel(SubPGSaleNorBuy);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(570, 120, 45, 16));
        lineAmount = new QLineEdit(SubPGSaleNorBuy);
        lineAmount->setObjectName("lineAmount");
        lineAmount->setGeometry(QRect(580, 140, 31, 23));
        lineAmount->setMaximumSize(QSize(31, 23));
        PBSearchBook = new QPushButton(SubPGSaleNorBuy);
        PBSearchBook->setObjectName("PBSearchBook");
        PBSearchBook->setGeometry(QRect(360, 120, 80, 51));
        inventoryTable = new QTableWidget(SubPGSaleNorBuy);
        if (inventoryTable->columnCount() < 3)
            inventoryTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        inventoryTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        inventoryTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        inventoryTable->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        inventoryTable->setObjectName("inventoryTable");
        inventoryTable->setGeometry(QRect(13, 159, 311, 401));
        PBCancel = new QPushButton(SubPGSaleNorBuy);
        PBCancel->setObjectName("PBCancel");
        PBCancel->setGeometry(QRect(530, 250, 80, 61));
        PBUpdate = new QPushButton(SubPGSaleNorBuy);
        PBUpdate->setObjectName("PBUpdate");
        PBUpdate->setGeometry(QRect(370, 20, 81, 41));
        lineName = new QLineEdit(SubPGSaleNorBuy);
        lineName->setObjectName("lineName");
        lineName->setGeometry(QRect(480, 40, 141, 23));
        label = new QLabel(SubPGSaleNorBuy);
        label->setObjectName("label");
        label->setGeometry(QRect(480, 20, 53, 15));
        label_2 = new QLabel(SubPGSaleNorBuy);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 120, 53, 15));

        retranslateUi(SubPGSaleNorBuy);

        QMetaObject::connectSlotsByName(SubPGSaleNorBuy);
    } // setupUi

    void retranslateUi(QWidget *SubPGSaleNorBuy)
    {
        SubPGSaleNorBuy->setWindowTitle(QCoreApplication::translate("SubPGSaleNorBuy", "Normal", nullptr));
        PBRm->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Remove", nullptr));
        PBAdd->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Add", nullptr));
        PBConfirm->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Confirm", nullptr));
        lineSearch->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bookListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bookListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bookListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Amount", nullptr));
        label_4->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Amount", nullptr));
        PBSearchBook->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = inventoryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = inventoryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = inventoryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Amount", nullptr));
        PBCancel->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Cancel", nullptr));
        PBUpdate->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Refresh", nullptr));
        lineName->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Name", nullptr));
        label->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("SubPGSaleNorBuy", "Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubPGSaleNorBuy: public Ui_SubPGSaleNorBuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBPGSALENORBUY_H
