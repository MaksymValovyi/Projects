

#include "F:\MAX\HSW\Semester2\Projects\CalculatorProject\src\Calculator.cpp"
#include "F:\MAX\HSW\Semester2\Projects\CalculatorProject\src\FunktionsBasic.h"

#include <F:\MAX\HSW\Semester2\Projects\googletest\googletest\include\gtest\gtest.h>

using namespace std;

// Функція, яку ми тестуємо
int add(int a, int b) {
    return a + b;
}

// Написання тесту
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
}

// Точка входу для Google Test
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}