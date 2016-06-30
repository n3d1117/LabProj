//
// Created by ned on 30/06/16.
//

#ifndef LABPROJ_LOADRESOURCES_H
#define LABPROJ_LOADRESOURCES_H

#include <QApplication>
#include <QProgressBar>

class LoadResources {

public:
    LoadResources();
    virtual ~LoadResources();
    void setProgressBarValue(int value);
    void showProgressBar();

private:
    QProgressBar *progressBar;
};


#endif //LABPROJ_LOADRESOURCES_H
