/********************************************************************************
** Form generated from reading UI file 'pginventory.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGINVENTORY_H
#define UI_PGINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PGInventory
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *removeTitle;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *removePress;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *removeAmount;
    QPushButton *PBRemove;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *addTitle;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *addPress;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *addPrice;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *addAmount;
    QPushButton *PBAdd;
    QPushButton *PBSearch;
    QLineEdit *searchLine;
    QPushButton *PBUpdate;
    QPushButton *PBSave;
    QPushButton *PBImport;
    QLineEdit *importLine;
    QLabel *label_7;

    void setupUi(QWidget *PGInventory)
    {
        if (PGInventory->objectName().isEmpty())
            PGInventory->setObjectName("PGInventory");
        PGInventory->resize(1000, 800);
        PGInventory->setMinimumSize(QSize(1000, 800));
        tableWidget = new QTableWidget(PGInventory);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 180, 1001, 621));
        layoutWidget = new QWidget(PGInventory);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(430, 100, 548, 50));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_5->addWidget(label_5);

        removeTitle = new QLineEdit(layoutWidget);
        removeTitle->setObjectName("removeTitle");

        verticalLayout_5->addWidget(removeTitle);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_6->addWidget(label_6);

        removePress = new QLineEdit(layoutWidget);
        removePress->setObjectName("removePress");

        verticalLayout_6->addWidget(removePress);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout_8->addWidget(label_8);

        removeAmount = new QLineEdit(layoutWidget);
        removeAmount->setObjectName("removeAmount");

        verticalLayout_8->addWidget(removeAmount);


        horizontalLayout_4->addLayout(verticalLayout_8);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        PBRemove = new QPushButton(layoutWidget);
        PBRemove->setObjectName("PBRemove");

        horizontalLayout_3->addWidget(PBRemove);

        layoutWidget1 = new QWidget(PGInventory);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(430, 30, 548, 50));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        addTitle = new QLineEdit(layoutWidget1);
        addTitle->setObjectName("addTitle");

        verticalLayout->addWidget(addTitle);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        addPress = new QLineEdit(layoutWidget1);
        addPress->setObjectName("addPress");

        verticalLayout_2->addWidget(addPress);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        addPrice = new QLineEdit(layoutWidget1);
        addPrice->setObjectName("addPrice");

        verticalLayout_3->addWidget(addPrice);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        addAmount = new QLineEdit(layoutWidget1);
        addAmount->setObjectName("addAmount");

        verticalLayout_4->addWidget(addAmount);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        PBAdd = new QPushButton(layoutWidget1);
        PBAdd->setObjectName("PBAdd");

        horizontalLayout_2->addWidget(PBAdd);

        PBSearch = new QPushButton(PGInventory);
        PBSearch->setObjectName("PBSearch");
        PBSearch->setGeometry(QRect(140, 150, 80, 23));
        searchLine = new QLineEdit(PGInventory);
        searchLine->setObjectName("searchLine");
        searchLine->setGeometry(QRect(230, 150, 171, 23));
        PBUpdate = new QPushButton(PGInventory);
        PBUpdate->setObjectName("PBUpdate");
        PBUpdate->setGeometry(QRect(290, 60, 91, 51));
        PBSave = new QPushButton(PGInventory);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(20, 50, 80, 23));
        PBImport = new QPushButton(PGInventory);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(20, 100, 80, 23));
        importLine = new QLineEdit(PGInventory);
        importLine->setObjectName("importLine");
        importLine->setGeometry(QRect(120, 100, 113, 23));
        label_7 = new QLabel(PGInventory);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 71, 31));

        retranslateUi(PGInventory);

        QMetaObject::connectSlotsByName(PGInventory);
    } // setupUi

    void retranslateUi(QWidget *PGInventory)
    {
        PGInventory->setWindowTitle(QCoreApplication::translate("PGInventory", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGInventory", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PGInventory", "\345\207\272\347\211\210\347\244\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PGInventory", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PGInventory", "\345\272\223\345\255\230\346\225\260\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("PGInventory", "\344\271\246\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("PGInventory", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_8->setText(QCoreApplication::translate("PGInventory", "\346\225\260\351\207\217", nullptr));
        PBRemove->setText(QCoreApplication::translate("PGInventory", "Remove", nullptr));
        label->setText(QCoreApplication::translate("PGInventory", "\344\271\246\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("PGInventory", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_3->setText(QCoreApplication::translate("PGInventory", "\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("PGInventory", "\346\225\260\351\207\217", nullptr));
        PBAdd->setText(QCoreApplication::translate("PGInventory", "Add", nullptr));
        PBSearch->setText(QCoreApplication::translate("PGInventory", "Search", nullptr));
        searchLine->setText(QCoreApplication::translate("PGInventory", "Title", nullptr));
        PBUpdate->setText(QCoreApplication::translate("PGInventory", "Refresh", nullptr));
        PBSave->setText(QCoreApplication::translate("PGInventory", "Save", nullptr));
        PBImport->setText(QCoreApplication::translate("PGInventory", "Import", nullptr));
        importLine->setText(QCoreApplication::translate("PGInventory", "\351\200\211\346\213\251\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        label_7->setText(QCoreApplication::translate("PGInventory", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\345\272\223\345\255\230</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGInventory: public Ui_PGInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGINVENTORY_H
