#include "logic.h"

int reverse_number(int number)
{
    int is_negative = 0;
    if (number < 0)
    {
        is_negative = 1;
        number = -number;
    }

    int reverse = 0;

    while (number != 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    if (is_negative)
        reverse = -reverse;

    return reverse;
}
