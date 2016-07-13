//
// Created by ned on 01/07/16.
//

#include "File.h"

File::File(const char *filename) : file(fopen(filename, "r")), sizeInBytes(0) {
    if (!file) {
        throw runtime_error("Could not open file!");
    } else {
        fseek(file, 0, SEEK_END);
        sizeInBytes = static_cast<int>(ftell(file));
        cout << "File " << filename << " opened successfully, size is " << sizeInBytes << " bytes." << endl;
    }
}

File::~File() {
    if (fclose(file)) {
        throw runtime_error("Failed to close file");
    }
}
