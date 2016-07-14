//
// Created by ned on 14/07/16.
//

#ifndef LABPROJ_SUBJECT_H
#define LABPROJ_SUBJECT_H

#include "Observer.h"

class Subject {
protected:
    virtual ~Subject() { }
public:
    virtual void registerObserver(Observer * o) = 0;
    virtual void removeObserver(Observer * o) = 0;
    virtual void notifyObservers() const = 0;
};

#endif //LABPROJ_SUBJECT_H
