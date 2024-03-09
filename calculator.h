#pragma once
#include <iostream>
#include <Windows.h>

bool invalidInput = false;

void Calculator()
{
	float x, y;
	char op;	
	
		std::cout << "Enter the First Number : ";
		std::cin >> x;
		system("cls");

		std::cout << "Select an operator : ' + ' , ' - ' , ' * ' , ' / ' , ' % '\n";
		std::cin >> op;
		system("cls");

		std::cout << "Select the Second Number : ";
		std::cin >> y;
		system("cls");

		switch (op)
		{
		case'+': std::cout << x << " " << op << " " << y << " = " << x + y; std::cout << "\n\n"
			<< "Press Enter To Continue.";
			system("pause>0");
			system("cls"); invalidInput = false; break;
		case'-': std::cout << x << " " << op << " " << y << " = " << x - y; std::cout << "\n\n"
			<< "Press Enter To Continue.";
			system("pause>0");
			system("cls"); invalidInput = false; break;
		case'*': std::cout << x << " " << op << " " << y << " = " << x * y; std::cout << "\n\n"
			<< "Press Enter To Continue.";
			system("pause>0");
			system("cls"); invalidInput = false; break;
		case'/': std::cout << x << " " << op << " " << y << " = " << x / y; std::cout << "\n\n"
			<< "Press Enter To Continue.";
			system("pause>0");
			system("cls"); invalidInput = false; break;
		case'%':
			bool intX, intY;
			intX = (int)x;
			intY = (int)y;

			if (intX && intY)
			{
				std::cout << x << " " << op << " " << y << " = " << (int)x % (int)y; std::cout << "\n\n"
					<< "Press Enter To Continue."; invalidInput = false;
				system("pause>0");
				system("cls");
			}
			else
			{
				std::cout << "Invalid Input"; std::cout << "\n\n"
					<< "Press Enter To Continue."; invalidInput = false;
				system("pause>0");
				system("cls");
			}
			break;

			invalidInput = false;

		default:
		{
			std::cout << "Please Enter Suitable Numbers or Operator.\n\nPress any key to Close.";
			invalidInput = true;
			system("pause > nul");
			system("cls");
			break;
		}
		}		
}

