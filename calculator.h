#pragma once
#include <iostream>
#include <Windows.h>

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
		case'+': std::cout << x << " " << op << " " << y << " = " << x + y; Sleep(2000); system("cls"); break;
		case'-': std::cout << x << " " << op << " " << y << " = " << x - y; Sleep(2000); system("cls"); break;
		case'*': std::cout << x << " " << op << " " << y << " = " << x * y; Sleep(2000); system("cls"); break;
		case'/': std::cout << x << " " << op << " " << y << " = " << x / y; Sleep(2000); system("cls"); break;
		case'%':
			bool intX, intY;
			intX = (int)x;
			intY = (int)y;

			if (intX && intY)
			{
				std::cout << x << " " << op << " " << y << " = " << (int)x % (int)y; Sleep(2000); system("cls");
			}
			else
			{
				std::cout << "Invalid Input"; Sleep(2000); system("cls");
			}
			break;
		default: std::cout << "Please Enter Suitable Numbers or Operator."; Sleep(2000); system("cls");
		}
}

