/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *PGSale;
    QWidget *PGPurchasing;
    QWidget *PGMembers;
    QWidget *PGIntention;
    QWidget *PGPromotion;
    QWidget *PGSupplier;
    QWidget *PGPress;
    QWidget *PGInventory;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *PBSale;
    QPushButton *PBInventory;
    QPushButton *PBPurchasing;
    QPushButton *PBMembers;
    QPushButton *PBIntention;
    QPushButton *PBPromotion;
    QPushButton *PBSupplier;
    QPushButton *PBPress;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1179, 833);
        MainWidget->setMinimumSize(QSize(1179, 833));
        MainWidget->setMaximumSize(QSize(1179, 833));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/picture/src/icon1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        stackedWidget = new QStackedWidget(MainWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(130, 11, 1000, 1258));
        stackedWidget->setMinimumSize(QSize(1000, 800));
        PGSale = new QWidget();
        PGSale->setObjectName("PGSale");
        stackedWidget->addWidget(PGSale);
        PGPurchasing = new QWidget();
        PGPurchasing->setObjectName("PGPurchasing");
        stackedWidget->addWidget(PGPurchasing);
        PGMembers = new QWidget();
        PGMembers->setObjectName("PGMembers");
        stackedWidget->addWidget(PGMembers);
        PGIntention = new QWidget();
        PGIntention->setObjectName("PGIntention");
        stackedWidget->addWidget(PGIntention);
        PGPromotion = new QWidget();
        PGPromotion->setObjectName("PGPromotion");
        stackedWidget->addWidget(PGPromotion);
        PGSupplier = new QWidget();
        PGSupplier->setObjectName("PGSupplier");
        stackedWidget->addWidget(PGSupplier);
        PGPress = new QWidget();
        PGPress->setObjectName("PGPress");
        stackedWidget->addWidget(PGPress);
        PGInventory = new QWidget();
        PGInventory->setObjectName("PGInventory");
        stackedWidget->addWidget(PGInventory);
        widget = new QWidget(MainWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 93, 801));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PBSale = new QPushButton(widget);
        PBSale->setObjectName("PBSale");
        PBSale->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBSale);

        PBInventory = new QPushButton(widget);
        PBInventory->setObjectName("PBInventory");
        PBInventory->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBInventory);

        PBPurchasing = new QPushButton(widget);
        PBPurchasing->setObjectName("PBPurchasing");
        PBPurchasing->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBPurchasing);

        PBMembers = new QPushButton(widget);
        PBMembers->setObjectName("PBMembers");
        PBMembers->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBMembers);

        PBIntention = new QPushButton(widget);
        PBIntention->setObjectName("PBIntention");
        PBIntention->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBIntention);

        PBPromotion = new QPushButton(widget);
        PBPromotion->setObjectName("PBPromotion");
        PBPromotion->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBPromotion);

        PBSupplier = new QPushButton(widget);
        PBSupplier->setObjectName("PBSupplier");
        PBSupplier->setMinimumSize(QSize(91, 51));

        verticalLayout->addWidget(PBSupplier);

        PBPress = new QPushButton(widget);
        PBPress->setObjectName("PBPress");
        PBPress->setMinimumSize(QSize(91, 51));
        PBPress->setMaximumSize(QSize(91, 51));

        verticalLayout->addWidget(PBPress);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "Book store management", nullptr));
        PBSale->setText(QCoreApplication::translate("MainWidget", "\345\233\276\344\271\246\351\224\200\345\224\256", nullptr));
        PBInventory->setText(QCoreApplication::translate("MainWidget", "\345\233\276\344\271\246\345\272\223\345\255\230", nullptr));
        PBPurchasing->setText(QCoreApplication::translate("MainWidget", "\345\233\276\344\271\246\351\207\207\350\264\255", nullptr));
        PBMembers->setText(QCoreApplication::translate("MainWidget", "\344\274\232\345\221\230", nullptr));
        PBIntention->setText(QCoreApplication::translate("MainWidget", "\350\264\255\344\271\246\346\204\217\345\220\221", nullptr));
        PBPromotion->setText(QCoreApplication::translate("MainWidget", "\344\277\203\351\224\200\346\264\273\345\212\250", nullptr));
        PBSupplier->setText(QCoreApplication::translate("MainWidget", "\344\276\233\345\272\224\345\225\206", nullptr));
        PBPress->setText(QCoreApplication::translate("MainWidget", "\345\207\272\347\211\210\347\244\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
