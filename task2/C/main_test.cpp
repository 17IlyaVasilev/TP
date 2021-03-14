#include "main_test.h"

TEST(CHECK, FUNC_A){
    ASSERT_TRUE(A_checker());
}

TEST(CHECK, FUNC_B){
    ASSERT_TRUE(B_checker());
}

int main(int a, char **b){
    testing::InitGoogleTest(&a, b);
    return RUN_ALL_TESTS();
}


