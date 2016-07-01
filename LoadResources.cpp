//
// Created by ned on 30/06/16.
//

#include "LoadResources.h"

LoadResources::LoadResources(QProgressBar* bar) : pBar(bar) {
    bar->setMinimum(0);
    bar->setMaximum(1000);
    bar->setValue(0);
}

void LoadResources::load(std::vector<const char *> filenames) throw(runtime_error) {

    for (auto& itr : filenames) {
        handleFile(itr);
        pBar->setValue(pBar->value() + static_cast<int>(1000/filenames.size()));
    }
}

void LoadResources::handleFile(const char * itr) {
    try {
        File file(itr);
        file.write("test");
    } catch(runtime_error& e) {
        cerr << e.what() << endl;
    } catch(...) {
        cerr << "Unknown exception caught!" << endl;
    }
}



