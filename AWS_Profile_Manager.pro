TEMPLATE = app
TARGET = "AWS Profile Manager"

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += $$_PRO_FILE_PWD_/main.cpp \
    project_main_window.cpp \
    profile.cpp

HEADERS += \
    project_main_window.h \
    profile.h
