//
// Created by ned on 14/07/16.
//

#include "gtest/gtest.h"
#include "../LoadResources.h"
#include "../ConcreteObserver.h"

TEST(TestObserver, testFileName) {

    LoadResources loader;
    ConcreteObserver observer(&loader);

    std::vector<const char*> vector;
    vector.push_back("file.h");
    loader.load(vector);

    ASSERT_EQ(observer.resources->getFilename(), "file.h");
}

TEST(TestObserver, testFileSize) {

    LoadResources loader;
    ConcreteObserver observer(&loader);

    std::vector<const char*> vector;
    vector.push_back("../resources/bird.jpg");
    loader.load(vector);

    ASSERT_EQ(observer.resources->getFilesize(), 356059);
}

TEST(TestObserver, testLoaded) {

    LoadResources loader;
    ConcreteObserver observer(&loader);

    std::vector<const char*> vector;
    vector.push_back("../resources/bird.jpg");
    loader.load(vector);

    ASSERT_EQ(observer.resources->didLoadFile(), true);
}
