/********************************************************************************
** Form generated from reading UI file 'pgmembers.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGMEMBERS_H
#define UI_PGMEMBERS_H

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

class Ui_PGMembers
{
public:
    QTableWidget *tableInd;
    QTableWidget *tableCor;
    QPushButton *PBRemove;
    QPushButton *PBAdd;
    QPushButton *PBSave;
    QLineEdit *lineVersion;
    QPushButton *PBImport;
    QPushButton *PBRefresh;
    QLineEdit *lineLevel;
    QLineEdit *linePoints;
    QLabel *label;
    QLabel *label_2;
    QPushButton *PBChange;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PBSearch;
    QLineEdit *lineName;
    QComboBox *comboBox;
    QLabel *label_5;

    void setupUi(QWidget *PGMembers)
    {
        if (PGMembers->objectName().isEmpty())
            PGMembers->setObjectName("PGMembers");
        PGMembers->resize(1000, 800);
        PGMembers->setMinimumSize(QSize(1000, 800));
        PGMembers->setAutoFillBackground(true);
        tableInd = new QTableWidget(PGMembers);
        if (tableInd->columnCount() < 3)
            tableInd->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableInd->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableInd->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableInd->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableInd->setObjectName("tableInd");
        tableInd->setGeometry(QRect(10, 110, 311, 561));
        tableCor = new QTableWidget(PGMembers);
        if (tableCor->columnCount() < 3)
            tableCor->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableCor->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableCor->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableCor->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableCor->setObjectName("tableCor");
        tableCor->setGeometry(QRect(330, 110, 311, 561));
        PBRemove = new QPushButton(PGMembers);
        PBRemove->setObjectName("PBRemove");
        PBRemove->setGeometry(QRect(870, 382, 91, 21));
        PBAdd = new QPushButton(PGMembers);
        PBAdd->setObjectName("PBAdd");
        PBAdd->setGeometry(QRect(760, 360, 61, 31));
        PBSave = new QPushButton(PGMembers);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(710, 60, 80, 23));
        lineVersion = new QLineEdit(PGMembers);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(810, 110, 113, 21));
        PBImport = new QPushButton(PGMembers);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(710, 110, 80, 23));
        PBRefresh = new QPushButton(PGMembers);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(810, 250, 71, 51));
        lineLevel = new QLineEdit(PGMembers);
        lineLevel->setObjectName("lineLevel");
        lineLevel->setGeometry(QRect(682, 382, 31, 23));
        lineLevel->setMaximumSize(QSize(31, 23));
        linePoints = new QLineEdit(PGMembers);
        linePoints->setObjectName("linePoints");
        linePoints->setGeometry(QRect(719, 382, 31, 23));
        linePoints->setMaximumSize(QSize(31, 23));
        label = new QLabel(PGMembers);
        label->setObjectName("label");
        label->setGeometry(QRect(680, 360, 53, 15));
        label_2 = new QLabel(PGMembers);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(720, 360, 53, 15));
        PBChange = new QPushButton(PGMembers);
        PBChange->setObjectName("PBChange");
        PBChange->setGeometry(QRect(760, 390, 61, 31));
        label_3 = new QLabel(PGMembers);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 60, 121, 61));
        label_4 = new QLabel(PGMembers);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(300, 50, 161, 61));
        layoutWidget = new QWidget(PGMembers);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(700, 310, 282, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PBSearch = new QPushButton(layoutWidget);
        PBSearch->setObjectName("PBSearch");

        horizontalLayout->addWidget(PBSearch);

        lineName = new QLineEdit(layoutWidget);
        lineName->setObjectName("lineName");
        lineName->setMaximumSize(QSize(108, 23));

        horizontalLayout->addWidget(lineName);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMaximumSize(QSize(81, 23));

        horizontalLayout->addWidget(comboBox);

        label_5 = new QLabel(PGMembers);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 131, 61));

        retranslateUi(PGMembers);

        QMetaObject::connectSlotsByName(PGMembers);
    } // setupUi

    void retranslateUi(QWidget *PGMembers)
    {
        PGMembers->setWindowTitle(QCoreApplication::translate("PGMembers", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableInd->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGMembers", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableInd->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PGMembers", "\347\255\211\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableInd->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PGMembers", "\347\247\257\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableCor->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PGMembers", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableCor->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PGMembers", "\347\255\211\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableCor->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PGMembers", "\347\247\257\345\210\206", nullptr));
        PBRemove->setText(QCoreApplication::translate("PGMembers", "Remove", nullptr));
        PBAdd->setText(QCoreApplication::translate("PGMembers", "Add", nullptr));
        PBSave->setText(QCoreApplication::translate("PGMembers", "Save", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGMembers", "\350\276\223\345\205\245\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        PBImport->setText(QCoreApplication::translate("PGMembers", "Import", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGMembers", "Refresh", nullptr));
        label->setText(QCoreApplication::translate("PGMembers", "Level", nullptr));
        label_2->setText(QCoreApplication::translate("PGMembers", "Points", nullptr));
        PBChange->setText(QCoreApplication::translate("PGMembers", "Change", nullptr));
        label_3->setText(QCoreApplication::translate("PGMembers", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\344\270\252\344\272\272\344\274\232\345\221\230</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("PGMembers", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\344\274\201\344\270\232\344\274\232\345\221\230</span></p></body></html>", nullptr));
        PBSearch->setText(QCoreApplication::translate("PGMembers", "Search", nullptr));
        lineName->setText(QCoreApplication::translate("PGMembers", "Name", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PGMembers", "Individual", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PGMembers", "Corporate", nullptr));

        label_5->setText(QCoreApplication::translate("PGMembers", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\344\274\232\345\221\230\347\256\241\347\220\206</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGMembers: public Ui_PGMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGMEMBERS_H
