/********************************************************************************
** Form generated from reading UI file 'pgpromotion.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGPROMOTION_H
#define UI_PGPROMOTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PGPromotion
{
public:
    QPushButton *PBSave;
    QPushButton *PBImport;
    QLineEdit *lineVersion;
    QPushButton *PBConfirm;
    QPushButton *PBRefresh;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *line1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *line2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *line3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLineEdit *line4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLineEdit *linePro;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *lineLevel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineCor;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLineEdit *linePoints;
    QLabel *label;

    void setupUi(QWidget *PGPromotion)
    {
        if (PGPromotion->objectName().isEmpty())
            PGPromotion->setObjectName("PGPromotion");
        PGPromotion->resize(1000, 800);
        PGPromotion->setMinimumSize(QSize(1000, 800));
        PBSave = new QPushButton(PGPromotion);
        PBSave->setObjectName("PBSave");
        PBSave->setGeometry(QRect(30, 50, 80, 23));
        PBImport = new QPushButton(PGPromotion);
        PBImport->setObjectName("PBImport");
        PBImport->setGeometry(QRect(30, 90, 80, 23));
        lineVersion = new QLineEdit(PGPromotion);
        lineVersion->setObjectName("lineVersion");
        lineVersion->setGeometry(QRect(120, 90, 113, 23));
        PBConfirm = new QPushButton(PGPromotion);
        PBConfirm->setObjectName("PBConfirm");
        PBConfirm->setGeometry(QRect(620, 140, 80, 23));
        PBRefresh = new QPushButton(PGPromotion);
        PBRefresh->setObjectName("PBRefresh");
        PBRefresh->setGeometry(QRect(620, 100, 80, 23));
        layoutWidget = new QWidget(PGPromotion);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 30, 108, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        line1 = new QLineEdit(layoutWidget);
        line1->setObjectName("line1");
        line1->setMinimumSize(QSize(31, 23));
        line1->setMaximumSize(QSize(50, 23));
        line1->setReadOnly(true);

        horizontalLayout->addWidget(line1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        line2 = new QLineEdit(layoutWidget);
        line2->setObjectName("line2");
        line2->setMinimumSize(QSize(31, 23));
        line2->setMaximumSize(QSize(50, 23));
        line2->setReadOnly(true);

        horizontalLayout_2->addWidget(line2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(label_9);

        line3 = new QLineEdit(layoutWidget);
        line3->setObjectName("line3");
        line3->setMinimumSize(QSize(31, 23));
        line3->setMaximumSize(QSize(50, 23));
        line3->setReadOnly(true);

        horizontalLayout_3->addWidget(line3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_4->addWidget(label_10);

        line4 = new QLineEdit(layoutWidget);
        line4->setObjectName("line4");
        line4->setMinimumSize(QSize(31, 23));
        line4->setMaximumSize(QSize(50, 23));
        line4->setReadOnly(true);

        horizontalLayout_4->addWidget(line4);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(PGPromotion);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(411, 31, 108, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");

        verticalLayout_2->addWidget(label_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");

        horizontalLayout_5->addWidget(label_12);

        linePro = new QLineEdit(layoutWidget1);
        linePro->setObjectName("linePro");
        linePro->setMinimumSize(QSize(50, 23));
        linePro->setMaximumSize(QSize(31, 23));
        linePro->setReadOnly(false);

        horizontalLayout_5->addWidget(linePro);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");

        horizontalLayout_6->addWidget(label_13);

        lineLevel = new QLineEdit(layoutWidget1);
        lineLevel->setObjectName("lineLevel");
        lineLevel->setMinimumSize(QSize(50, 23));
        lineLevel->setMaximumSize(QSize(31, 23));
        lineLevel->setReadOnly(false);

        horizontalLayout_6->addWidget(lineLevel);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName("label_14");

        horizontalLayout_7->addWidget(label_14);

        lineCor = new QLineEdit(layoutWidget1);
        lineCor->setObjectName("lineCor");
        lineCor->setMinimumSize(QSize(31, 23));
        lineCor->setMaximumSize(QSize(50, 23));
        lineCor->setReadOnly(false);

        horizontalLayout_7->addWidget(lineCor);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName("label_15");

        horizontalLayout_8->addWidget(label_15);

        linePoints = new QLineEdit(layoutWidget1);
        linePoints->setObjectName("linePoints");
        linePoints->setMinimumSize(QSize(31, 23));
        linePoints->setMaximumSize(QSize(50, 23));
        linePoints->setReadOnly(false);

        horizontalLayout_8->addWidget(linePoints);


        verticalLayout_2->addLayout(horizontalLayout_8);

        label = new QLabel(PGPromotion);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -40, 191, 121));

        retranslateUi(PGPromotion);

        QMetaObject::connectSlotsByName(PGPromotion);
    } // setupUi

    void retranslateUi(QWidget *PGPromotion)
    {
        PGPromotion->setWindowTitle(QCoreApplication::translate("PGPromotion", "Form", nullptr));
        PBSave->setText(QCoreApplication::translate("PGPromotion", "Save", nullptr));
        PBImport->setText(QCoreApplication::translate("PGPromotion", "Import", nullptr));
        lineVersion->setText(QCoreApplication::translate("PGPromotion", "\351\200\211\346\213\251\344\270\200\344\270\252\347\211\210\346\234\254", nullptr));
        PBConfirm->setText(QCoreApplication::translate("PGPromotion", "Confirm", nullptr));
        PBRefresh->setText(QCoreApplication::translate("PGPromotion", "Refresh", nullptr));
        label_6->setText(QCoreApplication::translate("PGPromotion", "\345\275\223\345\211\215\346\212\230\346\211\243", nullptr));
        label_7->setText(QCoreApplication::translate("PGPromotion", "\344\277\203\351\224\200", nullptr));
        label_8->setText(QCoreApplication::translate("PGPromotion", "\347\255\211\347\272\247", nullptr));
        label_9->setText(QCoreApplication::translate("PGPromotion", "\344\274\201\344\270\232\347\211\271\344\276\233", nullptr));
        label_10->setText(QCoreApplication::translate("PGPromotion", "\347\247\257\345\210\206", nullptr));
        label_11->setText(QCoreApplication::translate("PGPromotion", "\346\233\264\346\224\271\346\212\230\346\211\243", nullptr));
        label_12->setText(QCoreApplication::translate("PGPromotion", "\344\277\203\351\224\200", nullptr));
        label_13->setText(QCoreApplication::translate("PGPromotion", "\347\255\211\347\272\247", nullptr));
        label_14->setText(QCoreApplication::translate("PGPromotion", "\344\274\201\344\270\232\347\211\271\344\276\233", nullptr));
        label_15->setText(QCoreApplication::translate("PGPromotion", "\347\247\257\345\210\206", nullptr));
        label->setText(QCoreApplication::translate("PGPromotion", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\344\277\203\351\224\200\346\212\230\346\211\243\347\256\241\347\220\206</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PGPromotion: public Ui_PGPromotion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGPROMOTION_H
