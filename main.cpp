#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    QMainWindow window;
    window.setFixedSize(500, 300);


    QPushButton *button = new QPushButton(&window);
    button->setGeometry(10,10,80,30);
    button->setText("Click Me!");
    button->setToolTip("Tooltip");

    window.show();

    return app.exec();
}
