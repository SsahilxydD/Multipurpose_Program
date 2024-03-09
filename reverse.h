#pragma once
#include <iostream>
#include <windows.h>

void rev()
{
	int number, reversedNumber = 0;

	std::cout << "Enter a Number : ";
	std::cin >> number;
	system("cls");
	std::cout << "Inputted Number : " << number << "\n\n";

	while (number != 0)
	{
		reversedNumber *= 10;
		reversedNumber += number % 10;
		number /= 10;
	}	
	std::cout << "The Reversed Number is : " << reversedNumber;
	std::cout << "\n\n"
		<< "Press Enter To Continue.";
	system("pause>0");
	system("cls");
}
