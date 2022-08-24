#include "pch.h"
#include "../FizzBuzzJazzLib/FizzBuzz.h"

void checkFizzBuzz(int value, std::string expect) {
	std::string result = FizzBuzz(value);
	EXPECT_EQ(expect, result);
}
TEST(FizzBuzzJazzTest, input1result1) {
	checkFizzBuzz(1, "1");
}
TEST(FizzBuzzJazzTest, input2result2) {
	checkFizzBuzz(2, "2");
}
TEST(FizzBuzzJazzTest, input3resultFizz) {
	checkFizzBuzz(3, "Fizz");
}
TEST(FizzBuzzJazzTest, input5result5) {
	checkFizzBuzz(5, "Buzz");
}
TEST(FizzBuzzJazzTest, divisible3resultFizz) {
	checkFizzBuzz(6, "Fizz");
}
TEST(FizzBuzzJazzTest, divisible5resultBuzz) {
	checkFizzBuzz(10, "Buzz");
}

TEST(FizzBuzzJazzTest, input7resultJazz) {
	checkFizzBuzz(7, "Jazz");
}

TEST(FizzBuzzJazzTest, divisible7resultJazz) {
	checkFizzBuzz(14, "Jazz");
}
