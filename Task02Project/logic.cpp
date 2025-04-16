#include "logic.h"

bool is_identical_digits(int number)
{
    number = number < 0 ? -number : number;

    int last_digit = number % 10;

    while (number != 0)
    {
        if (number % 10 != last_digit)
        {
            return false;
        }
        number /= 10;
    }

    return true;
}
