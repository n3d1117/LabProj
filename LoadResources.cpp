//
// Created by ned on 30/06/16.
//

#include "LoadResources.h"

LoadResources::LoadResources() {
    progressBar = new QProgressBar();
    progressBar->setMinimum(0);
    progressBar->setMaximum(99);
    progressBar->setValue(0);
}

LoadResources::~LoadResources() {
    delete progressBar;
}

void LoadResources::setProgressBarValue(int value) {
    if (value < 100 && value >= 0)
        progressBar->setValue(value);
    else
        progressBar->setValue(0);
}

void LoadResources::showProgressBar() {
    progressBar->show();
}



