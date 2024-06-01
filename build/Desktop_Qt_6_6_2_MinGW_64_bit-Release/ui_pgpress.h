/********************************************************************************
** Form generated from reading UI file 'pgpress.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGPRESS_H
#define UI_PGPRESS_H

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

class Ui_PGPress
{
public:
    QPushButton *PBImport;
    QLineEdit *lineVersion;
    QPushButton *PBSave;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBsearch;
    QLineEdit *lineSearch;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PBAdd;
    QPushButton *PBRemove;
    QTableWidget *tableWidget;
    QPushButton *PBRefresh;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *labelCount;

    void setupUi(QWidget *PGPress)
    {
        if (PGPress->objectName().isEmpty())
            PGPress->setObjectName("PGPress");
        PGPress->resize(1000, 800);
        PGPress->setMinimumSize(QSize(1000, 800));
        PBImport = new QPushButton(PGPress);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(110, 130, 80, 23));
        lineVersion = new QLineEdit(PGPress);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(190, 130, 113, 23));
        PBSave = new QPushButton(PGPress);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(110, 80, 80, 23));
        layoutWidget = new QWidget(PGPress);
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

        tableWidget = new QTableWidget(PGPress);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(540, 30, 421, 621));
        PBRefresh = new QPushButton(PGPress);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(370, 150, 80, 51));
        label_2 = new QLabel(PGPress);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-20, -10, 151, 81));
        layoutWidget1 = new QWidget(PGPress);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(270, 210, 39, 17));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        labelCount = new QLabel(layoutWidget1);
        labelCount->setObjectName("labelCount");

        horizontalLayout_3->addWidget(labelCount);


        retranslateUi(PGPress);

        QMetaObject::connectSlotsByName(PGPress);
    } // setupUi

    void retranslateUi(QWidget *PGPress)
    {
        PGPress->setWindowTitle(QCoreApplication::translate("PGPress", "Form", nullptr));
        PBImport->setText(QCoreApplication::translate("PGPress", "Import", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGPress", "\350\276\223\345\205\245\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        PBSave->setText(QCoreApplication::translate("PGPress", "Save", nullptr));
        PBsearch->setText(QCoreApplication::translate("PGPress", "Search", nullptr));
        lineSearch->setText(QString());
        PBAdd->setText(QCoreApplication::translate("PGPress", "Add", nullptr));
        PBRemove->setText(QCoreApplication::translate("PGPress", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGPress", "Press", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGPress", "Refresh", nullptr));
        label_2->setText(QCoreApplication::translate("PGPress", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\345\207\272\347\211\210\347\244\276</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("PGPress", "<html><head/><body><p align=\"center\">\346\200\273\346\225\260</p></body></html>", nullptr));
        labelCount->setText(QCoreApplication::translate("PGPress", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGPress: public Ui_PGPress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGPRESS_H
