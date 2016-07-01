//
// Created by ned on 01/07/16.
//

#include <QDesktopWidget>
#include <QPainter>
#include "MainWindow.h"
#include "LoadResources.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {

    this->setWindowTitle("Esercizio - Laboratorio di Programmazione - 2016");
    this->setFixedSize(QSize(600, 400));

    name = new QLabel("*  - 01/07/16", this);
    name->setGeometry(QRect(QPoint(15, 15), QSize(200, 30)));
    name->setAlignment(Qt::AlignLeft);

    linkToGitHub = new QLabel("<a href=\"https://github.com/n3d1117/LabProj\">GitHub Project</a>", this);
    linkToGitHub->setOpenExternalLinks(true);
    linkToGitHub->setGeometry(QRect(QPoint(485, 15), QSize(100, 30)));
    linkToGitHub->setAlignment(Qt::AlignRight);

    title = new QLabel("Classe che carica file di risorse e aggiorna una progress bar (con QT).", this);
    title->setGeometry(QRect(QPoint(100, 60), QSize(400, 100)));
    title->setWordWrap(true);
    title->setAlignment(Qt::AlignCenter);
    QFont font = title->font();
    font.setPointSize(20);
    title->setFont(font);

    m_button = new QPushButton("Load Resources!", this);
    m_button->setGeometry(QRect(QPoint(215, 200), QSize(170, 30)));

    progressBar = new QProgressBar(this);
    progressBar->setGeometry(QRect(QPoint(150, 170), QSize(300, 30)));

    text = new QTextEdit(this);
    text->setGeometry(QRect(QPoint(50, 240), QSize(500, 140)));
    text->setText("---> Ready to load resources!\n");
    text->setReadOnly(true);

    QTextCursor c =  text->textCursor();
    c.movePosition(QTextCursor::End);
    text->setTextCursor(c);

    // Connect button signal to appropriate slot
    connect(m_button, SIGNAL (released()), this, SLOT (loadResources()));
}

void MainWindow::loadResources() {

    m_button->setText("Loading...");
    text->setText("---> Ready to load resources!\n");

    LoadResources loader(progressBar, text, m_button);
    vector<const char*> filenames;

    filenames.push_back("resources/flower.jpg");
    filenames.push_back("resources/bird.jpg");
    filenames.push_back("resources/cat.jpg");
    filenames.push_back("resources/wallpaper.jpeg");
    filenames.push_back("resources/sample.jpg");
    filenames.push_back("resources/penguin.jpg");
    filenames.push_back("resources/large_image.jpg");
    filenames.push_back("resources/sample.txt");
    filenames.push_back("resources/hi.mp3");

    loader.load(filenames);

}