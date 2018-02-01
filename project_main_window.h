#ifndef PROJECTMAINWINDOW_H
#define PROJECTMAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSize>

class ProjectMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit ProjectMainWindow(QWidget *parent = nullptr);
    char* getName();

private:
    QRect *space;

signals:

public slots:
};

#endif // PROJECTMAINWINDOW_H
