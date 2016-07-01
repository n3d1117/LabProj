#include <iostream>
#include <QVBoxLayout>
#include <QPushButton>
#include <QApplication>
#include "MainWindow.h"

using namespace std;

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();

}