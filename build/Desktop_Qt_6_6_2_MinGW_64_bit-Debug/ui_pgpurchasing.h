/********************************************************************************
** Form generated from reading UI file 'pgpurchasing.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGPURCHASING_H
#define UI_PGPURCHASING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PGPurchasing
{
public:
    QTableWidget *tablePurchasing;
    QTableWidget *tableReturn;
    QLabel *label;
    QPushButton *PBRefresh;
    QPushButton *PBSave;
    QPushButton *PBImport;
    QLineEdit *lineVersion;
    QPushButton *PBAdd;
    QPushButton *PBRemove;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBSearch;
    QLineEdit *lineTitle;
    QLineEdit *linePress;
    QLineEdit *lineAmount;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *PGPurchasing)
    {
        if (PGPurchasing->objectName().isEmpty())
            PGPurchasing->setObjectName("PGPurchasing");
        PGPurchasing->resize(1000, 800);
        PGPurchasing->setMinimumSize(QSize(1000, 800));
        PGPurchasing->setAutoFillBackground(true);
        tablePurchasing = new QTableWidget(PGPurchasing);
        if (tablePurchasing->columnCount() < 3)
            tablePurchasing->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePurchasing->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePurchasing->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePurchasing->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tablePurchasing->setObjectName("tablePurchasing");
        tablePurchasing->setGeometry(QRect(50, 120, 311, 561));
        tableReturn = new QTableWidget(PGPurchasing);
        if (tableReturn->columnCount() < 3)
            tableReturn->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableReturn->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableReturn->setObjectName("tableReturn");
        tableReturn->setGeometry(QRect(500, 120, 311, 561));
        label = new QLabel(PGPurchasing);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 91, 51));
        PBRefresh = new QPushButton(PGPurchasing);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(380, 120, 101, 51));
        PBSave = new QPushButton(PGPurchasing);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(790, 10, 80, 23));
        PBImport = new QPushButton(PGPurchasing);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(790, 60, 80, 23));
        lineVersion = new QLineEdit(PGPurchasing);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(880, 60, 113, 23));
        PBAdd = new QPushButton(PGPurchasing);
        PBAdd->setObjectName("PBAdd");
        PBAdd->setGeometry(QRect(450, 80, 80, 23));
        PBRemove = new QPushButton(PGPurchasing);
        PBRemove->setObjectName("PBRemove");
        PBRemove->setGeometry(QRect(540, 80, 80, 23));
        layoutWidget = new QWidget(PGPurchasing);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 50, 435, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PBSearch = new QPushButton(layoutWidget);
        PBSearch->setObjectName("PBSearch");

        horizontalLayout->addWidget(PBSearch);

        lineTitle = new QLineEdit(layoutWidget);
        lineTitle->setObjectName("lineTitle");

        horizontalLayout->addWidget(lineTitle);

        linePress = new QLineEdit(layoutWidget);
        linePress->setObjectName("linePress");

        horizontalLayout->addWidget(linePress);

        lineAmount = new QLineEdit(layoutWidget);
        lineAmount->setObjectName("lineAmount");
        lineAmount->setMaximumSize(QSize(41, 23));

        horizontalLayout->addWidget(lineAmount);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMaximumSize(QSize(81, 23));

        horizontalLayout->addWidget(comboBox);

        label_3 = new QLabel(PGPurchasing);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, -20, 91, 81));
        label_4 = new QLabel(PGPurchasing);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(750, 80, 91, 51));
        label_2 = new QLabel(PGPurchasing);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 30, 53, 15));
        label_5 = new QLabel(PGPurchasing);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 30, 53, 15));
        label_6 = new QLabel(PGPurchasing);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(490, 30, 53, 15));

        retranslateUi(PGPurchasing);

        QMetaObject::connectSlotsByName(PGPurchasing);
    } // setupUi

    void retranslateUi(QWidget *PGPurchasing)
    {
        PGPurchasing->setWindowTitle(QCoreApplication::translate("PGPurchasing", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablePurchasing->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGPurchasing", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablePurchasing->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PGPurchasing", "\345\207\272\347\211\210\347\244\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablePurchasing->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PGPurchasing", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableReturn->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PGPurchasing", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableReturn->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PGPurchasing", "\345\207\272\347\211\210\347\244\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableReturn->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PGPurchasing", "\346\225\260\351\207\217", nullptr));
        label->setText(QCoreApplication::translate("PGPurchasing", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\350\277\233\344\271\246</span></p></body></html>", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGPurchasing", "Refresh", nullptr));
        PBSave->setText(QCoreApplication::translate("PGPurchasing", "Save", nullptr));
        PBImport->setText(QCoreApplication::translate("PGPurchasing", "Import", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGPurchasing", "\350\276\223\345\205\245\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        PBAdd->setText(QCoreApplication::translate("PGPurchasing", "Add", nullptr));
        PBRemove->setText(QCoreApplication::translate("PGPurchasing", "Remove", nullptr));
        PBSearch->setText(QCoreApplication::translate("PGPurchasing", "Search", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PGPurchasing", "Purchase", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PGPurchasing", "Return", nullptr));

        label_3->setText(QCoreApplication::translate("PGPurchasing", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\351\207\207\350\264\255</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("PGPurchasing", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\351\200\200\344\271\246</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("PGPurchasing", "\344\271\246\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("PGPurchasing", "\345\207\272\347\211\210\347\244\276", nullptr));
        label_6->setText(QCoreApplication::translate("PGPurchasing", "\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGPurchasing: public Ui_PGPurchasing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGPURCHASING_H
