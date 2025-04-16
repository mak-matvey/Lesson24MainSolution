#include <iostream>
#include "logic.h"

using namespace std;

int main(void)
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Reversed number: " << reverse_number(number)
		<< endl;
}