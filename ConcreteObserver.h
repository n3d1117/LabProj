//
// Created by ned on 14/07/16.
//

#ifndef LABPROJ_CONCRETEOBSERVER_H
#define LABPROJ_CONCRETEOBSERVER_H

#include "LoadResources.h"
#include "Observer.h"

class ConcreteObserver : public Observer {
public:
    ConcreteObserver(LoadResources *resources_) : resources(resources_) {
        resources->registerObserver(this);
    }

    virtual ~ConcreteObserver() {
        resources->removeObserver(this);
    }

    virtual void update() override {
    }

    LoadResources * resources;
};

#endif //LABPROJ_CONCRETEOBSERVER_H
