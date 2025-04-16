#include "logic.h"

bool is_prime_number(int number)
{
	if (number <= 0)
	{
		return false;
	}

	return number % 2 != 0 && number % 3 != 0 &&
		number % 5 != 0 ? true : false;
}