// tests.cpp
#include "calc.h"
#include "db_mock.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h> 

 
TEST(positive, add) {
    DB_Mock db_mock;
    Calc t(&db_mock);
    ASSERT_EQ(3, t.add(1,2));
}

TEST(negative, add) {
    DB_Mock db_mock;
    Calc t(&db_mock);
    ASSERT_EQ(5, t.add(1,2));
}

TEST(positive_test_with_mock, add_with_persistance) {
    DB_Mock db_mock;
    Calc t(&db_mock);
    EXPECT_CALL(db_mock, write_to_db(3));
    ASSERT_EQ(3, t.add_with_persistance(1,2));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

