#include <QApplication>
#include <QDebug>
#include "include/interfaces/UserInterface.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    UserInterface ui;
    ui.show();
    qDebug() << "Application window opened.";
    int result = app.exec();
    qDebug() << "Application window closed.";
    return result;
}
