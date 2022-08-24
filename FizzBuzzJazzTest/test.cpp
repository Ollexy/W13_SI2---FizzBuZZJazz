#include "pch.h"
#include "../FizzBuzzJazzLib/FizzBuzz.h"

void checkFizzBuzz(int value, std::string expect) {
	std::string result = FizzBuzz(value);
	EXPECT_EQ(expect, result);
}

TEST(FizzBuzzJazzTest, input2result2) {
	checkFizzBuzz(2, "2");
}

TEST(FizzBuzzJazzTest, input4result4) {
	checkFizzBuzz(4, "4");
}
TEST(FizzBuzzJazzTest, input21629result21629) {
	checkFizzBuzz(21629, "21629");
}
TEST(FizzBuzzJazzTest, input3resultFizz) {
	checkFizzBuzz(3, "Fizz");
}
TEST(FizzBuzzJazzTest, divisible3resultFizz) {
	checkFizzBuzz(6, "Fizz");
}
TEST(FizzBuzzJazzTest, input21624resultFizz) {
	checkFizzBuzz(21624, "Fizz");
}
TEST(FizzBuzzJazzTest, input5result5) {
	checkFizzBuzz(5, "Buzz");
}
TEST(FizzBuzzJazzTest, divisible5resultBuzz) {
	checkFizzBuzz(10, "Buzz");
}
TEST(FizzBuzzJazzTest, input21625result5) {
	checkFizzBuzz(21625, "Buzz");
}
TEST(FizzBuzzJazzTest, input7resultJazz) {
	checkFizzBuzz(7, "Jazz");
}
TEST(FizzBuzzJazzTest, divisible7resultJazz) {
	checkFizzBuzz(14, "Jazz");
}
TEST(FizzBuzzJazzTest, input216231resultJazz) {
	checkFizzBuzz(216231, "Jazz");
}
TEST(FizzBuzzJazzTest, input15resultFizzBuzz) {
	checkFizzBuzz(15, "FizzBuzz");
}
TEST(FizzBuzzJazzTest, input60resultFizzBuzz) {
	checkFizzBuzz(60, "FizzBuzz");
}
TEST(FizzBuzzJazzTest, input21resultFizzJazz) {
	checkFizzBuzz(21, "FizzJazz");
}
TEST(FizzBuzzJazzTest, input42resultFizzJazz) {
	checkFizzBuzz(42, "FizzJazz");
}
TEST(FizzBuzzJazzTest, input35resultBuzzJazz) {
	checkFizzBuzz(35, "BuzzJazz");
}
TEST(FizzBuzzJazzTest, input140resultBuzzJazz) {
	checkFizzBuzz(140, "BuzzJazz");
}
TEST(FizzBuzzJazzTest, input105resultFizzBuzzJazz) {
	checkFizzBuzz(105, "FizzBuzzJazz");
}
TEST(FizzBuzzJazzTest, input840resultFizzBuzzJazz) {
	checkFizzBuzz(840, "FizzBuzzJazz");
}
