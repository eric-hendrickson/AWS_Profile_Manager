TEMPLATE = app
TARGET = "AWS Credentials Manager"

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    ../../Development/AWS_Credentials_Manager/main.cpp
