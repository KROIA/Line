#-------------------------------------------------
#
# Project created by QtCreator 2018-10-01T21:42:45
#
#-------------------------------------------------

QT       += widgets

TARGET = Line
TEMPLATE = lib

DEFINES += LINE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#-------------------------------------------------------
#---This Project needs external code--------------------
# geometry : https://github.com/KROIA/Geometry


username     = AlexKrieg
QT_work_dir  = C:/Users/$$username/Documents/QT
geometryPath = $$QT_work_dir/lib/Geometry

INCLUDEPATH += $$geometryPath

SOURCES += \
        line.cpp \
        $$geometryPath/geometry.cpp

HEADERS += \
        line.h \
        line_global.h 

unix {
    target.path = /usr/lib
    INSTALLS += target
}
