#include "pch.h"
#include "FizzBuzz.h"

std::string FizzBuzz(int input)
{
    if (input % 3 == 0)
        return "Fizz";
    else if (input % 5 == 0)
        return "Buzz";
    else if (input % 7 == 0)
        return "Jazz";
    return std::to_string(input);
}
