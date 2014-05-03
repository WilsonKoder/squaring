// squaring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using std::cout;	using std::cin;
int main()
{
	cout << "What would you like to put your number to the power of?" << std::endl;
	int power;
	cin >> power;
	cout << "Enter a number you would like to put to the power of " << power << std::endl;
	double number;
	cin >> number;
	cout << std::endl << number << " to the power of " << power << " = " << std::pow(number, power) << std::endl;
	while (1 == 1) {
		cout << std::endl << "Any other numbers then?" << std::endl;
		cin >> number;
		cout << "And what would you like to put that to the power of?" << std::endl;
		cin >> power;
		cout << std::endl << number << " to the power of " << power << " = " << std::pow(number, power) << std::endl;
		cout << std::endl << "Anything else?" << std::endl;
		cin >> number;
		cout << "Ok then, what would you like to put that to the power of?";
		cin >> power;
		cout << std::endl << number << " to the power of " << power << " = " << std::pow(number, power) << std::endl;
	}
	return 0;
}

