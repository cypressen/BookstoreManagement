QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD\logic\ContainerClass
INCLUDEPATH += $$PWD\logic\MethodClass

SOURCES += \
    logic/ContainerClass/Book.cpp \
    logic/ContainerClass/BookLib.cpp \
    logic/ContainerClass/Member.cpp \
    logic/MethodClass/Intention.cpp \
    logic/MethodClass/Inventory.cpp \
    logic/MethodClass/Members.cpp \
    logic/MethodClass/Press.cpp \
    logic/MethodClass/Promotion.cpp \
    logic/MethodClass/Purchasing.cpp \
    logic/MethodClass/Sale.cpp \
    logic/MethodClass/Supplier.cpp \
    main.cpp \
    mainwidget.cpp \
    pgintention.cpp \
    pginventory.cpp \
    pgmembers.cpp \
    pgpress.cpp \
    pgpromotion.cpp \
    pgpurchasing.cpp \
    pgsale.cpp \
    pgsupplier.cpp \
    subpgsalemembuy.cpp \
    subpgsalenorbuy.cpp

HEADERS += \
    logic/ContainerClass/Book.h \
    logic/ContainerClass/BookLib.h \
    logic/ContainerClass/Member.h \
    logic/MethodClass/Intention.h \
    logic/MethodClass/Inventory.h \
    logic/MethodClass/Members.h \
    logic/MethodClass/Press.h \
    logic/MethodClass/Promotion.h \
    logic/MethodClass/Purchasing.h \
    logic/MethodClass/Sale.h \
    logic/MethodClass/Serializable.h \
    logic/MethodClass/Supplier.h \
    mainwidget.h \
    pgintention.h \
    pginventory.h \
    pgmembers.h \
    pgpress.h \
    pgpromotion.h \
    pgpurchasing.h \
    pgsale.h \
    pgsupplier.h \
    subpgsalemembuy.h \
    subpgsalenorbuy.h

FORMS += \
    mainwidget.ui \
    pgintention.ui \
    pginventory.ui \
    pgmembers.ui \
    pgpress.ui \
    pgpromotion.ui \
    pgpurchasing.ui \
    pgsale.ui \
    pgsupplier.ui \
    subpgsalemembuy.ui \
    subpgsalenorbuy.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
