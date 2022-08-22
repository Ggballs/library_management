QT += core gui
QT += sql
QT += axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
UI_DIR=./UI

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cardpage.cpp \
    database.cpp \
    main.cpp \
    mainpage.cpp \
    signin_page.cpp \
    stupage.cpp

HEADERS += \
    cardpage.h \
    database.h \
    mainpage.h \
    signin_page.h \
    stupage.h

FORMS += \
    cardpage.ui \
    mainpage.ui \
    signin_page.ui \
    stupage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#win32:CONFIG(release, debug|release): LIBS += -LE:/Qt/5.12.12/msvc2017_64/lib/ -lQt5AxContainer
#else:win32:CONFIG(debug, debug|release): LIBS += -LE:/Qt/5.12.12/msvc2017_64/lib/ -lQt5AxContainerd

#INCLUDEPATH += E:/Qt/5.12.12/msvc2017_64/include
#DEPENDPATH += E:/Qt/5.12.12/msvc2017_64/include

#win32:CONFIG(release, debug|release): LIBS += -LE:/Qt/5.12.12/msvc2017_64/lib/ -lQt5AxBase
#else:win32:CONFIG(debug, debug|release): LIBS += -LE:/Qt/5.12.12/msvc2017_64/lib/ -lQt5AxBased

