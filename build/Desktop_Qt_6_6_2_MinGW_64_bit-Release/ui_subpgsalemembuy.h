/********************************************************************************
** Form generated from reading UI file 'subpgsalemembuy.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBPGSALEMEMBUY_H
#define UI_SUBPGSALEMEMBUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubPGSaleMemBuy
{
public:
    QTableWidget *inventoryTable;
    QLineEdit *lineMemName;
    QTableWidget *membersTable;
    QPushButton *PBSearchMem;
    QLineEdit *linePoints;
    QComboBox *comboBox;
    QLabel *label;
    QTableWidget *bookListTable;
    QPushButton *PBRm;
    QPushButton *PBConfirm;
    QPushButton *PBCancel;
    QPushButton *PBSelectMem;
    QPushButton *PBAdd;
    QLineEdit *lineAmount;
    QLineEdit *lineSearch;
    QLabel *label_4;
    QPushButton *PBSearchBook;
    QPushButton *PBUpdate;
    QLineEdit *lineSelected;

    void setupUi(QWidget *SubPGSaleMemBuy)
    {
        if (SubPGSaleMemBuy->objectName().isEmpty())
            SubPGSaleMemBuy->setObjectName("SubPGSaleMemBuy");
        SubPGSaleMemBuy->resize(746, 673);
        SubPGSaleMemBuy->setAutoFillBackground(true);
        inventoryTable = new QTableWidget(SubPGSaleMemBuy);
        if (inventoryTable->columnCount() < 3)
            inventoryTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        inventoryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        inventoryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        inventoryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        inventoryTable->setObjectName("inventoryTable");
        inventoryTable->setGeometry(QRect(430, 260, 311, 401));
        lineMemName = new QLineEdit(SubPGSaleMemBuy);
        lineMemName->setObjectName("lineMemName");
        lineMemName->setGeometry(QRect(107, 51, 108, 23));
        membersTable = new QTableWidget(SubPGSaleMemBuy);
        if (membersTable->columnCount() < 4)
            membersTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        membersTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        membersTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        membersTable->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        membersTable->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        membersTable->setObjectName("membersTable");
        membersTable->setGeometry(QRect(10, 260, 411, 401));
        PBSearchMem = new QPushButton(SubPGSaleMemBuy);
        PBSearchMem->setObjectName("PBSearchMem");
        PBSearchMem->setGeometry(QRect(21, 51, 80, 23));
        linePoints = new QLineEdit(SubPGSaleMemBuy);
        linePoints->setObjectName("linePoints");
        linePoints->setGeometry(QRect(20, 100, 51, 23));
        comboBox = new QComboBox(SubPGSaleMemBuy);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(228, 51, 81, 23));
        label = new QLabel(SubPGSaleMemBuy);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 53, 15));
        bookListTable = new QTableWidget(SubPGSaleMemBuy);
        if (bookListTable->columnCount() < 3)
            bookListTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        bookListTable->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        bookListTable->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        bookListTable->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        bookListTable->setObjectName("bookListTable");
        bookListTable->setGeometry(QRect(330, 110, 311, 131));
        PBRm = new QPushButton(SubPGSaleMemBuy);
        PBRm->setObjectName("PBRm");
        PBRm->setGeometry(QRect(648, 83, 80, 23));
        PBConfirm = new QPushButton(SubPGSaleMemBuy);
        PBConfirm->setObjectName("PBConfirm");
        PBConfirm->setGeometry(QRect(649, 129, 80, 61));
        PBCancel = new QPushButton(SubPGSaleMemBuy);
        PBCancel->setObjectName("PBCancel");
        PBCancel->setGeometry(QRect(649, 229, 80, 23));
        PBSelectMem = new QPushButton(SubPGSaleMemBuy);
        PBSelectMem->setObjectName("PBSelectMem");
        PBSelectMem->setGeometry(QRect(20, 220, 80, 23));
        PBAdd = new QPushButton(SubPGSaleMemBuy);
        PBAdd->setObjectName("PBAdd");
        PBAdd->setGeometry(QRect(648, 50, 80, 23));
        lineAmount = new QLineEdit(SubPGSaleMemBuy);
        lineAmount->setObjectName("lineAmount");
        lineAmount->setGeometry(QRect(589, 69, 31, 23));
        lineAmount->setMaximumSize(QSize(31, 23));
        lineSearch = new QLineEdit(SubPGSaleMemBuy);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(449, 69, 108, 23));
        label_4 = new QLabel(SubPGSaleMemBuy);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(579, 49, 45, 16));
        PBSearchBook = new QPushButton(SubPGSaleMemBuy);
        PBSearchBook->setObjectName("PBSearchBook");
        PBSearchBook->setGeometry(QRect(360, 50, 80, 51));
        PBUpdate = new QPushButton(SubPGSaleMemBuy);
        PBUpdate->setObjectName("PBUpdate");
        PBUpdate->setGeometry(QRect(210, 130, 91, 51));
        lineSelected = new QLineEdit(SubPGSaleMemBuy);
        lineSelected->setObjectName("lineSelected");
        lineSelected->setGeometry(QRect(110, 220, 201, 23));

        retranslateUi(SubPGSaleMemBuy);

        QMetaObject::connectSlotsByName(SubPGSaleMemBuy);
    } // setupUi

    void retranslateUi(QWidget *SubPGSaleMemBuy)
    {
        SubPGSaleMemBuy->setWindowTitle(QCoreApplication::translate("SubPGSaleMemBuy", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = inventoryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = inventoryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = inventoryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = membersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = membersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = membersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Points", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = membersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Type", nullptr));
        PBSearchMem->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Search", nullptr));
        linePoints->setText(QCoreApplication::translate("SubPGSaleMemBuy", "0", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SubPGSaleMemBuy", "Individual", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SubPGSaleMemBuy", "Corporate", nullptr));

        label->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Points", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = bookListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = bookListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = bookListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Amount", nullptr));
        PBRm->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Remove", nullptr));
        PBConfirm->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Confirm", nullptr));
        PBCancel->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Cancel", nullptr));
        PBSelectMem->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Select", nullptr));
        PBAdd->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Amount", nullptr));
        PBSearchBook->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Search", nullptr));
        PBUpdate->setText(QCoreApplication::translate("SubPGSaleMemBuy", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubPGSaleMemBuy: public Ui_SubPGSaleMemBuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBPGSALEMEMBUY_H
