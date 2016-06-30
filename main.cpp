#include <iostream>
#include <QApplication>
#include "LoadResources.h"

using namespace std;

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    LoadResources load;
    load.setProgressBarValue(75);
    load.showProgressBar();

    return app.exec();

}