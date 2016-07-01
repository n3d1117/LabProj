//
// Created by ned on 30/06/16.
//

#include "gtest/gtest.h"
#include "../File.h"

TEST(LoadResources, testNonExistentFile) {
    ASSERT_ANY_THROW(File file("../resources/non_existent_file.jpg"));
}

TEST(LoadResources, testExistentResource) {
    ASSERT_NO_THROW(File file("../resources/sky.jpg"));
}
