#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Is your number have identical digits? "
		<< (is_identical_digits(number) ? "Yes\n" : "No\n");
}