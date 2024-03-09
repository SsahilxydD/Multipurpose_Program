#pragma once
#include <iostream>
#include <Windows.h>

int number;
int last;
int x, y;


void single()
{
	std::cout << "Select a Number : ";
	std::cin >> x;
	system("cls");

	std::cout << "Choose The Range of numbers!\n";
	std::cout << "From : ";
	std::cin >> number;
	system("cls");
	std::cout << "To : ";
	std::cin >> last;
	system("cls");

	if (number > last) {
		std::cout << "Error: Starting range cannot be greater than the final range." << std::endl;
		std::cout << "\n\n"
			<< "Press Enter To Continue.";
		system("pause>0");
		system("cls");
		return; // Exit the function
	}

	bool foundDivisible = false; // Flag to indicate if any number is divisible

	while (true)
	{
		if (number <= last)
		{
			if (number % x == 0)
			{
				std::cout << number << " is Divisible by " << x << "." << '\n';
				foundDivisible = true;
			}
			number++;
			Sleep(10);
		}
		else
		{
			std::cout << "\n\n"
				<< "Press Enter To Continue.";
			system("pause>0");
			system("cls");
			break;
		}
	}

	if (!foundDivisible) 
	{
		std::cout << "No number in the given range is divisible by " << x << "." << '\n';
		std::cout << "\n\n"
			<< "Press Enter To Continue.";
		system("pause>0");
		system("cls");
	}
}


void dual()
{
	
	std::cout << "Select a Number : ";
	std::cin >> x;
	system("cls");

	std::cout << "Select another Number : ";
	std::cin >> y;
	system("cls");


	std::cout << "Choose The Range of numbers!\n";
	std::cout << "From : ";
	std::cin >> number;
	system("cls");

	std::cout << "To : ";
	std::cin >> last;
	system("cls");

	if (number > last) {
		std::cout << "Error: Starting range cannot be greater than the final range." << std::endl;
		std::cout << "\n\n"
			<< "Press Enter To Continue.";
		system("pause>0");
		system("cls");
		return; // Exit the function
	}

	bool foundDivisible = false; // Flag to indicate if any number is divisible

	while (true)
	{
		if (number <= last)
		{
			if (number % x == 0 && number % y == 0)
			{
				std::cout << number << " is Divisible by " << x << " and " << y << "." << '\n';
				foundDivisible = true;
			}
			number++;
			Sleep(10);
		}
		else
		{
			std::cout << "\n\n"
				<< "Press Enter To Continue.";
			system("pause>0");
			system("cls");
			break;
		}
	}

	if (!foundDivisible) {
		std::cout << "No number in the given range is divisible by " << x << " and " << y << "." << '\n';
		std::cout << "\n\n"
			<< "Press Enter To Continue.";
		system("pause>0");
		system("cls");
	}
}

void div()
{
	char in;
	std::cout << "Select an Option\n\n";
	std::cout << "1. Single Number Divisiblity Tester.\n\n";
	std::cout << "2. Dual Number Divisibility Tester.\n\n";
	std::cout << "Option : ";
	std::cin >> in;
	system("cls");
	if (in == '1')
	{
		single();
	}
	else if (in == '2')
	{
		dual();
	}
}
