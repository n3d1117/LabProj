//
// Created by ned on 14/07/16.
//

#ifndef LABPROJ_OBSERVER_H
#define LABPROJ_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {};
    virtual void update() = 0;
};

#endif //LABPROJ_OBSERVER_H
