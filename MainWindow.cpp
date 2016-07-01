//
// Created by ned on 01/07/16.
//

#include <QDesktopWidget>
#include "MainWindow.h"
#include "LoadResources.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {

    this->setWindowTitle("Esercizio - Laboratorio di Programmazione");
    this->setFixedSize(QSize(600, 400));

    m_button = new QPushButton("Load Resources!", this);
    m_button->setGeometry(QRect(QPoint(215, 200), QSize(170, 30)));

    progressBar = new QProgressBar(this);
    progressBar->setGeometry(QRect(QPoint(150, 170), QSize(300, 30)));

    // Connect button signal to appropriate slot
    connect(m_button, SIGNAL (released()), this, SLOT (loadResources()));
}

void MainWindow::loadResources() {

    m_button->setText("Loading...");

    LoadResources loader(progressBar);
    vector<const char*> filenames;
    filenames.push_back("resources/sky.jpg");
    filenames.push_back("resources/flower.jpg");
    filenames.push_back("resources/bird.jpg");
    filenames.push_back("resources/cat.jpg");
    filenames.push_back("resources/wallpaper.jpeg");
    filenames.push_back("resources/sample.jpg");
    filenames.push_back("resources/penguin.jpg");
    filenames.push_back("resources/large_image.jpg");
    filenames.push_back("resources/sample.txt");

    loader.load(filenames);

    m_button->setText("Resources Loaded!");

}