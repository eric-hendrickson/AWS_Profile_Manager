#include "project_main_window.h"
#include <QComboBox>
#include <QStringList>
#include "profile.h"

ProjectMainWindow::ProjectMainWindow(QWidget *parent) : QMainWindow(parent) {
    Profile *profile = new Profile("default");
    QStringList commands;
    commands << profile->getName();
    commands << "mkdecision";
    QComboBox* combo = new QComboBox(this);
    combo->setMinimumWidth(500);
    this->setFixedSize(combo->size().width()+20, combo->size().height()+20);
    combo->setGeometry(10, 10, combo->size().width(), combo->size().height());
    combo->addItems(commands);
}
