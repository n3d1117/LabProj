//
// Created by ned on 30/06/16.
//

#ifndef LABPROJ_LOADRESOURCES_H
#define LABPROJ_LOADRESOURCES_H

#include <QApplication>
#include <QProgressBar>
#include <QTimer>
#include <iostream>
#include <QTextEdit>
#include <QPushButton>
#include "File.h"

using namespace std;

class LoadResources {
public:
    LoadResources(QProgressBar * bar, QTextEdit * text, QPushButton * button);
    void load(std::vector<const char*> filenames) throw(runtime_error);
    void handleFile(const char * itr);
    void updateButtonText();

    int getNumberOfResources() const {
        return numberOfResources;
    }

private:
    int numberOfResources;
    QProgressBar * pBar;
    QTextEdit * log;
    QPushButton * pButton;
};


#endif //LABPROJ_LOADRESOURCES_H