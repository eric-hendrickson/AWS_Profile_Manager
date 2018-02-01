#include "project_main_window.h"

#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    ProjectMainWindow window;




    window.show();

    return app.exec();
}
