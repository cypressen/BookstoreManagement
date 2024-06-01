/********************************************************************************
** Form generated from reading UI file 'pgsupplier.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGSUPPLIER_H
#define UI_PGSUPPLIER_H

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

class Ui_PGSupplier
{
public:
    QPushButton *PBSave;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBsearch;
    QLineEdit *lineSearch;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PBAdd;
    QPushButton *PBRemove;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *labelCount;
    QLineEdit *lineVersion;
    QTableWidget *tableWidget;
    QPushButton *PBRefresh;
    QPushButton *PBImport;
    QLabel *label_2;

    void setupUi(QWidget *PGSupplier)
    {
        if (PGSupplier->objectName().isEmpty())
            PGSupplier->setObjectName("PGSupplier");
        PGSupplier->resize(1000, 800);
        PGSupplier->setMinimumSize(QSize(1000, 800));
        PBSave = new QPushButton(PGSupplier);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(110, 80, 80, 23));
        layoutWidget = new QWidget(PGSupplier);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 230, 198, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PBsearch = new QPushButton(layoutWidget);
        PBsearch->setObjectName("PBsearch");

        horizontalLayout->addWidget(PBsearch);

        lineSearch = new QLineEdit(layoutWidget);
        lineSearch->setObjectName("lineSearch");

        horizontalLayout->addWidget(lineSearch);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        PBAdd = new QPushButton(layoutWidget);
        PBAdd->setObjectName("PBAdd");

        horizontalLayout_2->addWidget(PBAdd);

        PBRemove = new QPushButton(layoutWidget);
        PBRemove->setObjectName("PBRemove");

        horizontalLayout_2->addWidget(PBRemove);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget_2 = new QWidget(PGSupplier);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(270, 210, 39, 17));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        labelCount = new QLabel(layoutWidget_2);
        labelCount->setObjectName("labelCount");

        horizontalLayout_3->addWidget(labelCount);

        lineVersion = new QLineEdit(PGSupplier);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(190, 130, 113, 23));
        tableWidget = new QTableWidget(PGSupplier);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(540, 30, 421, 621));
        PBRefresh = new QPushButton(PGSupplier);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(370, 150, 80, 51));
        PBImport = new QPushButton(PGSupplier);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(110, 130, 80, 23));
        label_2 = new QLabel(PGSupplier);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-20, -10, 151, 81));

        retranslateUi(PGSupplier);

        QMetaObject::connectSlotsByName(PGSupplier);
    } // setupUi

    void retranslateUi(QWidget *PGSupplier)
    {
        PGSupplier->setWindowTitle(QCoreApplication::translate("PGSupplier", "Form", nullptr));
        PBSave->setText(QCoreApplication::translate("PGSupplier", "Save", nullptr));
        PBsearch->setText(QCoreApplication::translate("PGSupplier", "Search", nullptr));
        PBAdd->setText(QCoreApplication::translate("PGSupplier", "Add", nullptr));
        PBRemove->setText(QCoreApplication::translate("PGSupplier", "Remove", nullptr));
        label->setText(QCoreApplication::translate("PGSupplier", "<html><head/><body><p align=\"center\">\346\200\273\346\225\260</p></body></html>", nullptr));
        labelCount->setText(QCoreApplication::translate("PGSupplier", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGSupplier", "\350\276\223\345\205\245\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGSupplier", "Supplier", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGSupplier", "Refresh", nullptr));
        PBImport->setText(QCoreApplication::translate("PGSupplier", "Import", nullptr));
        label_2->setText(QCoreApplication::translate("PGSupplier", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\344\276\233\345\272\224\345\225\206</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGSupplier: public Ui_PGSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGSUPPLIER_H
