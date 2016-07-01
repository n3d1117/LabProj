//
// Created by ned on 01/07/16.
//

#include "File.h"

File::File(const char *filename) : file(fopen(filename, "a")) {
    if (!file) {
        throw runtime_error("Could not open file!");
    } else {
        fseek(file, 0, SEEK_END);
        long size = ftell(file);
        cout << "File " << filename << " opened successfully, size is " << size << " bytes." << endl;
    }
}

File::~File() {
    if (fclose(file)) {
        throw runtime_error("Failed to close file");
    } else {
        cout << "Successfully closed file" << endl << endl;
    }
}

void File::write(const char *str) {
    if (EOF == std::fputs(str, file)) {
        throw runtime_error("Could not write to file!");
    } else {
        cout << "Did successfully write " << str << " to file." << endl;
    }
}





