/********************************************************************************
** Form generated from reading UI file 'pgintention.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGINTENTION_H
#define UI_PGINTENTION_H

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

class Ui_PGIntention
{
public:
    QTableWidget *tableIndWonder;
    QTableWidget *tableCorWonder;
    QTableWidget *tableMembers;
    QLineEdit *lineMemSearch;
    QPushButton *PBMemSearch;
    QPushButton *PBSelect;
    QComboBox *comboMemBox;
    QTableWidget *tableBookList;
    QTableWidget *tableInven;
    QPushButton *PBBookSearch;
    QLineEdit *lineBookSearch;
    QLineEdit *lineAmount;
    QPushButton *PBBookAdd;
    QPushButton *PBBookRemove;
    QPushButton *PBSearch;
    QLineEdit *lineSearch;
    QComboBox *comboSearchBox;
    QPushButton *PBRemove;
    QPushButton *PBRefreshMems;
    QPushButton *PBSave;
    QPushButton *PBImport;
    QLineEdit *lineVersion;
    QPushButton *PBAdd;
    QPushButton *PBRefreshInven;
    QPushButton *PBRefreshIntention;
    QPushButton *PBRefresh;
    QPushButton *PBRefreshList;
    QLabel *label;

    void setupUi(QWidget *PGIntention)
    {
        if (PGIntention->objectName().isEmpty())
            PGIntention->setObjectName("PGIntention");
        PGIntention->resize(1000, 800);
        PGIntention->setMinimumSize(QSize(1000, 800));
        tableIndWonder = new QTableWidget(PGIntention);
        if (tableIndWonder->columnCount() < 2)
            tableIndWonder->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableIndWonder->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableIndWonder->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableIndWonder->setObjectName("tableIndWonder");
        tableIndWonder->setGeometry(QRect(10, 370, 481, 421));
        tableCorWonder = new QTableWidget(PGIntention);
        if (tableCorWonder->columnCount() < 2)
            tableCorWonder->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableCorWonder->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableCorWonder->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableCorWonder->setObjectName("tableCorWonder");
        tableCorWonder->setGeometry(QRect(510, 370, 481, 421));
        tableMembers = new QTableWidget(PGIntention);
        if (tableMembers->columnCount() < 2)
            tableMembers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableMembers->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableMembers->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        tableMembers->setObjectName("tableMembers");
        tableMembers->setGeometry(QRect(180, 40, 271, 131));
        lineMemSearch = new QLineEdit(PGIntention);
        lineMemSearch->setObjectName("lineMemSearch");
        lineMemSearch->setGeometry(QRect(232, 10, 131, 23));
        PBMemSearch = new QPushButton(PGIntention);
        PBMemSearch->setObjectName("PBMemSearch");
        PBMemSearch->setGeometry(QRect(170, 10, 61, 23));
        PBSelect = new QPushButton(PGIntention);
        PBSelect->setObjectName("PBSelect");
        PBSelect->setGeometry(QRect(430, 10, 80, 23));
        comboMemBox = new QComboBox(PGIntention);
        comboMemBox->addItem(QString());
        comboMemBox->addItem(QString());
        comboMemBox->setObjectName("comboMemBox");
        comboMemBox->setGeometry(QRect(360, 10, 72, 23));
        tableBookList = new QTableWidget(PGIntention);
        if (tableBookList->columnCount() < 3)
            tableBookList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableBookList->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableBookList->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableBookList->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableBookList->setObjectName("tableBookList");
        tableBookList->setGeometry(QRect(600, 10, 331, 141));
        tableInven = new QTableWidget(PGIntention);
        if (tableInven->columnCount() < 3)
            tableInven->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableInven->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableInven->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableInven->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        tableInven->setObjectName("tableInven");
        tableInven->setGeometry(QRect(600, 190, 331, 161));
        PBBookSearch = new QPushButton(PGIntention);
        PBBookSearch->setObjectName("PBBookSearch");
        PBBookSearch->setGeometry(QRect(589, 160, 61, 23));
        lineBookSearch = new QLineEdit(PGIntention);
        lineBookSearch->setObjectName("lineBookSearch");
        lineBookSearch->setGeometry(QRect(650, 160, 113, 23));
        lineAmount = new QLineEdit(PGIntention);
        lineAmount->setObjectName("lineAmount");
        lineAmount->setGeometry(QRect(760, 160, 41, 23));
        PBBookAdd = new QPushButton(PGIntention);
        PBBookAdd->setObjectName("PBBookAdd");
        PBBookAdd->setGeometry(QRect(800, 160, 80, 23));
        PBBookRemove = new QPushButton(PGIntention);
        PBBookRemove->setObjectName("PBBookRemove");
        PBBookRemove->setGeometry(QRect(880, 160, 80, 23));
        PBSearch = new QPushButton(PGIntention);
        PBSearch->setObjectName("PBSearch");
        PBSearch->setGeometry(QRect(230, 330, 80, 23));
        lineSearch = new QLineEdit(PGIntention);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(310, 330, 113, 23));
        comboSearchBox = new QComboBox(PGIntention);
        comboSearchBox->addItem(QString());
        comboSearchBox->addItem(QString());
        comboSearchBox->setObjectName("comboSearchBox");
        comboSearchBox->setGeometry(QRect(420, 330, 91, 23));
        PBRemove = new QPushButton(PGIntention);
        PBRemove->setObjectName("PBRemove");
        PBRemove->setGeometry(QRect(510, 330, 80, 23));
        PBRefreshMems = new QPushButton(PGIntention);
        PBRefreshMems->setObjectName("PBRefreshMems");
        PBRefreshMems->setGeometry(QRect(460, 40, 121, 51));
        PBSave = new QPushButton(PGIntention);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(20, 290, 80, 23));
        PBImport = new QPushButton(PGIntention);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(20, 330, 80, 23));
        lineVersion = new QLineEdit(PGIntention);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(110, 330, 81, 23));
        PBAdd = new QPushButton(PGIntention);
        PBAdd->setObjectName("PBAdd");
        PBAdd->setGeometry(QRect(420, 260, 81, 51));
        PBRefreshInven = new QPushButton(PGIntention);
        PBRefreshInven->setObjectName("PBRefreshInven");
        PBRefreshInven->setGeometry(QRect(460, 200, 121, 51));
        PBRefreshIntention = new QPushButton(PGIntention);
        PBRefreshIntention->setObjectName("PBRefreshIntention");
        PBRefreshIntention->setGeometry(QRect(240, 260, 111, 51));
        PBRefresh = new QPushButton(PGIntention);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(10, 70, 81, 51));
        PBRefreshList = new QPushButton(PGIntention);
        PBRefreshList->setObjectName("PBRefreshList");
        PBRefreshList->setGeometry(QRect(460, 110, 121, 51));
        label = new QLabel(PGIntention);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 111, 41));

        retranslateUi(PGIntention);

        QMetaObject::connectSlotsByName(PGIntention);
    } // setupUi

    void retranslateUi(QWidget *PGIntention)
    {
        PGIntention->setWindowTitle(QCoreApplication::translate("PGIntention", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableIndWonder->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PGIntention", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableIndWonder->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PGIntention", "\344\271\246\345\215\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableCorWonder->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PGIntention", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableCorWonder->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PGIntention", "\344\271\246\345\215\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableMembers->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PGIntention", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableMembers->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PGIntention", "\344\274\232\345\221\230\347\261\273\345\236\213", nullptr));
        PBMemSearch->setText(QCoreApplication::translate("PGIntention", "Search", nullptr));
        PBSelect->setText(QCoreApplication::translate("PGIntention", "Select", nullptr));
        comboMemBox->setItemText(0, QCoreApplication::translate("PGIntention", "Individual", nullptr));
        comboMemBox->setItemText(1, QCoreApplication::translate("PGIntention", "Corporate", nullptr));

        QTableWidgetItem *___qtablewidgetitem6 = tableBookList->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("PGIntention", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableBookList->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("PGIntention", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableBookList->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("PGIntention", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableInven->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("PGIntention", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableInven->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("PGIntention", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableInven->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("PGIntention", "\346\225\260\351\207\217", nullptr));
        PBBookSearch->setText(QCoreApplication::translate("PGIntention", "Search", nullptr));
        PBBookAdd->setText(QCoreApplication::translate("PGIntention", "Add", nullptr));
        PBBookRemove->setText(QCoreApplication::translate("PGIntention", "Remove", nullptr));
        PBSearch->setText(QCoreApplication::translate("PGIntention", "Search", nullptr));
        comboSearchBox->setItemText(0, QCoreApplication::translate("PGIntention", "Individual", nullptr));
        comboSearchBox->setItemText(1, QCoreApplication::translate("PGIntention", "Corporate", nullptr));

        PBRemove->setText(QCoreApplication::translate("PGIntention", "Remove", nullptr));
        PBRefreshMems->setText(QCoreApplication::translate("PGIntention", "Refresh members", nullptr));
        PBSave->setText(QCoreApplication::translate("PGIntention", "Save", nullptr));
        PBImport->setText(QCoreApplication::translate("PGIntention", "Import", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGIntention", "\351\200\211\346\213\251\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        PBAdd->setText(QCoreApplication::translate("PGIntention", "ADD", nullptr));
        PBRefreshInven->setText(QCoreApplication::translate("PGIntention", "Refresh inventory", nullptr));
        PBRefreshIntention->setText(QCoreApplication::translate("PGIntention", "Refresh intention", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGIntention", "Refresh ALL", nullptr));
        PBRefreshList->setText(QCoreApplication::translate("PGIntention", "Refresh BookList", nullptr));
        label->setText(QCoreApplication::translate("PGIntention", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\350\264\255\344\271\246\346\204\217\345\220\221</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGIntention: public Ui_PGIntention {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGINTENTION_H
