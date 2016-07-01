//
// Created by ned on 30/06/16.
//

#ifndef LABPROJ_LOADRESOURCES_H
#define LABPROJ_LOADRESOURCES_H

#include <QApplication>
#include <QProgressBar>
#include <QTimer>
#include <iostream>
#include "File.h"

using namespace std;

class LoadResources {
public:
    LoadResources(QProgressBar* bar);
    void load(std::vector<const char*> filenames) throw(runtime_error);
    void handleFile(const char* itr);
private:
    QProgressBar * pBar;
};


#endif //LABPROJ_LOADRESOURCES_H