//
// Created by ned on 01/07/16.
//

#include "gtest/gtest.h"
#include "../LoadResources.h"

TEST(TestLoadResources, testNoFileNamesProvided) {

    int test = 0;
    QApplication app(test, NULL);

    std::vector<const char*> vector;
    QProgressBar * bar = new QProgressBar();
    QTextEdit * text = new QTextEdit();
    QPushButton * button = new QPushButton();
    LoadResources loader(bar, text, button);
    ASSERT_EQ(loader.getNumberOfResources(), 0);
}
