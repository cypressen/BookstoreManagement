/********************************************************************************
** Form generated from reading UI file 'pgsale.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGSALE_H
#define UI_PGSALE_H

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

class Ui_PGSale
{
public:
    QTableWidget *tableWidgetNor;
    QTableWidget *tableWidgetInd;
    QTableWidget *tableWidgetCor;
    QPushButton *PBAdd;
    QComboBox *selectBox;
    QLineEdit *lineSearch;
    QComboBox *selectTypeBox;
    QPushButton *PBRemove;
    QPushButton *PBSearch;
    QPushButton *PBSave;
    QPushButton *PBImport;
    QLineEdit *lineVersion;
    QPushButton *PBRefresh;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *discountLabel1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *discountLabel2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *discountLabel3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *discountLabel4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *PGSale)
    {
        if (PGSale->objectName().isEmpty())
            PGSale->setObjectName("PGSale");
        PGSale->resize(1000, 800);
        PGSale->setMinimumSize(QSize(1000, 800));
        tableWidgetNor = new QTableWidget(PGSale);
        if (tableWidgetNor->columnCount() < 2)
            tableWidgetNor->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetNor->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetNor->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetNor->setObjectName("tableWidgetNor");
        tableWidgetNor->setGeometry(QRect(0, 170, 1001, 207));
        tableWidgetInd = new QTableWidget(PGSale);
        if (tableWidgetInd->columnCount() < 2)
            tableWidgetInd->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetInd->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetInd->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidgetInd->setObjectName("tableWidgetInd");
        tableWidgetInd->setGeometry(QRect(0, 380, 1001, 207));
        tableWidgetCor = new QTableWidget(PGSale);
        if (tableWidgetCor->columnCount() < 2)
            tableWidgetCor->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetCor->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetCor->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        tableWidgetCor->setObjectName("tableWidgetCor");
        tableWidgetCor->setGeometry(QRect(0, 590, 1001, 207));
        PBAdd = new QPushButton(PGSale);
        PBAdd->setObjectName("PBAdd");
        PBAdd->setGeometry(QRect(880, 30, 81, 51));
        selectBox = new QComboBox(PGSale);
        selectBox->addItem(QString());
        selectBox->addItem(QString());
        selectBox->setObjectName("selectBox");
        selectBox->setGeometry(QRect(790, 50, 81, 21));
        lineSearch = new QLineEdit(PGSale);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(630, 100, 113, 23));
        selectTypeBox = new QComboBox(PGSale);
        selectTypeBox->addItem(QString());
        selectTypeBox->addItem(QString());
        selectTypeBox->addItem(QString());
        selectTypeBox->setObjectName("selectTypeBox");
        selectTypeBox->setGeometry(QRect(761, 100, 111, 23));
        PBRemove = new QPushButton(PGSale);
        PBRemove->setObjectName("PBRemove");
        PBRemove->setGeometry(QRect(880, 90, 80, 51));
        PBSearch = new QPushButton(PGSale);
        PBSearch->setObjectName("PBSearch");
        PBSearch->setGeometry(QRect(540, 100, 80, 23));
        PBSave = new QPushButton(PGSale);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(30, 60, 80, 23));
        PBImport = new QPushButton(PGSale);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(30, 100, 80, 23));
        lineVersion = new QLineEdit(PGSale);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(120, 100, 113, 23));
        PBRefresh = new QPushButton(PGSale);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(370, 100, 81, 51));
        layoutWidget = new QWidget(PGSale);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 30, 125, 17));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        discountLabel1 = new QLabel(layoutWidget);
        discountLabel1->setObjectName("discountLabel1");

        horizontalLayout->addWidget(discountLabel1);

        layoutWidget1 = new QWidget(PGSale);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(190, 60, 145, 17));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        discountLabel2 = new QLabel(layoutWidget1);
        discountLabel2->setObjectName("discountLabel2");

        horizontalLayout_2->addWidget(discountLabel2);

        layoutWidget2 = new QWidget(PGSale);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(420, 30, 151, 17));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        discountLabel3 = new QLabel(layoutWidget2);
        discountLabel3->setObjectName("discountLabel3");

        horizontalLayout_3->addWidget(discountLabel3);

        layoutWidget3 = new QWidget(PGSale);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(370, 60, 198, 17));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        discountLabel4 = new QLabel(layoutWidget3);
        discountLabel4->setObjectName("discountLabel4");

        horizontalLayout_4->addWidget(discountLabel4);

        label_5 = new QLabel(PGSale);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 0, 131, 41));
        label_6 = new QLabel(PGSale);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 121, 31));

        retranslateUi(PGSale);

        QMetaObject::connectSlotsByName(PGSale);
    } // setupUi

    void retranslateUi(QWidget *PGSale)
    {
        PGSale->setWindowTitle(QCoreApplication::translate("PGSale", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetNor->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGSale", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetNor->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PGSale", "Detail", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInd->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PGSale", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInd->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PGSale", "Detail", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetCor->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PGSale", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetCor->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PGSale", "Detail", nullptr));
        PBAdd->setText(QCoreApplication::translate("PGSale", "Add", nullptr));
        selectBox->setItemText(0, QCoreApplication::translate("PGSale", "Normal", nullptr));
        selectBox->setItemText(1, QCoreApplication::translate("PGSale", "Member", nullptr));

        lineSearch->setText(QCoreApplication::translate("PGSale", "Name", nullptr));
        selectTypeBox->setItemText(0, QCoreApplication::translate("PGSale", "Normal", nullptr));
        selectTypeBox->setItemText(1, QCoreApplication::translate("PGSale", "Individual", nullptr));
        selectTypeBox->setItemText(2, QCoreApplication::translate("PGSale", "Corporate", nullptr));

        PBRemove->setText(QCoreApplication::translate("PGSale", "Remove", nullptr));
        PBSearch->setText(QCoreApplication::translate("PGSale", "Search", nullptr));
        PBSave->setText(QCoreApplication::translate("PGSale", "Save", nullptr));
        PBImport->setText(QCoreApplication::translate("PGSale", "Import", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGSale", "\351\200\211\346\213\251\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGSale", "Refresh", nullptr));
        label->setText(QCoreApplication::translate("PGSale", "Promotion:", nullptr));
        discountLabel1->setText(QString());
        label_2->setText(QCoreApplication::translate("PGSale", "Points(per 50):", nullptr));
        discountLabel2->setText(QString());
        label_3->setText(QCoreApplication::translate("PGSale", "Level(per rank):", nullptr));
        discountLabel3->setText(QString());
        label_4->setText(QCoreApplication::translate("PGSale", "SPECIAL For Corporate:", nullptr));
        discountLabel4->setText(QString());
        label_5->setText(QCoreApplication::translate("PGSale", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ff0000;\">DISCOUNT!!!</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("PGSale", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\351\224\200\345\224\256\347\256\241\347\220\206</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGSale: public Ui_PGSale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGSALE_H
