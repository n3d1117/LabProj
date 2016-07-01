//
// Created by ned on 01/07/16.
//

#ifndef LABPROJ_MAINWINDOW_H
#define LABPROJ_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QProgressBar>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow  {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
private slots:
    void loadResources();
private:
    QPushButton * m_button;
    QProgressBar * progressBar;
};


#endif //LABPROJ_MAINWINDOW_H
