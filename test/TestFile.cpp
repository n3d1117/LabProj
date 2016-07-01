//
// Created by ned on 30/06/16.
//

#include "gtest/gtest.h"
#include "../File.h"

TEST(TestFile, testNonExistentFile) {
    ASSERT_THROW(File file("../resources/non_existing_file.jpg"), runtime_error);
}

TEST(TestFile, testExistentResource) {
    ASSERT_NO_THROW(File file("../resources/bird.jpg"));
}

TEST(TestFile, testSizeForExistentFile) {
    File file("../resources/bird.jpg");
    ASSERT_FALSE(file.getSizeInBytes() == 0);
}
