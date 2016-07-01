//
// Created by ned on 01/07/16.
//

#ifndef LABPROJ_FILE_H
#define LABPROJ_FILE_H

#include <string>
#include <iostream>

using namespace std;

class File {
public:
    explicit File(const char* filename);
    ~File();

    //void write(const char* str);

    int getSizeInBytes() const {
        return sizeInBytes;
    }

private:
    int sizeInBytes;
    FILE* file;
};


#endif //LABPROJ_FILE_H
