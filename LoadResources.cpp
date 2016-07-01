//
// Created by ned on 30/06/16.
//

#include "LoadResources.h"

LoadResources::LoadResources(QProgressBar* bar, QTextEdit * text, QPushButton * button) : numberOfResources(0), pBar(bar), log(text), pButton(button) {
    bar->setMinimum(0);
    bar->setMaximum(1000);
    bar->setValue(0);
}

void LoadResources::load(std::vector<const char *> filenames) throw(runtime_error) {

    try {
        numberOfResources = static_cast<int>(filenames.size());
        if (!numberOfResources) {
            throw runtime_error("No resources provided.");
        }
    } catch(runtime_error& e) {
        cerr << e.what() << endl;
        pButton->setText("No resources provided.");
    }

    for (auto& itr : filenames) {
        handleFile(itr);
    }
}

void LoadResources::handleFile(const char * itr) {
    try {

        File file(itr);

        //Update Progress Bar Percentage
        pBar->setValue(pBar->value() + (1000/numberOfResources));

        //Update Text Log
        QString text = "✅ Loaded file '" + QString(itr) + QString("' successfully (") + QString::number(file.getSizeInBytes()) + QString(" bytes).") + "\n";
        log->append(text);

        //Update Button Text
        updateButtonText();

    } catch(runtime_error& e) {

        cerr << e.what() << endl << endl;

        //Update Tex Log
        QString text = QString("❌ Could not load file '") + itr + "'.\n";
        log->append(text);

        //Update Button Text
        updateButtonText();

    } catch(...) {
        cerr << "Unknown exception caught!" << endl;
    }
}

void LoadResources::updateButtonText() {
    QString percentText = QString::number(pBar->value() / 10) + QString("% resources loaded!");
    pButton->setText(percentText);
}



