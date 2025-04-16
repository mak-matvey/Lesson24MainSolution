#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Is your number prime? " <<
		(is_prime_number(number) ? "Yes\n" : "No\n");
}