#pragma once
#include <iostream>
#include <Windows.h>

void fact()
{
	using namespace std;
	int number;
	int factorial =1;
	cout << "Enter The Number that you want to find factorial of : ";
	cin >> number;
	system("cls");

	for (int i = 1 ; i <= number ; i++)
	{
		factorial *= i;
	}
	cout << "The Factorial for " << number << "! = " << factorial;
	std::cout << "\n\n"
		<< "Press Enter To Continue.";
	system("pause>0");
	system("cls");
}
