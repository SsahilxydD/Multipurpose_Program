#pragma once
#include <iostream>
#include <Windows.h>

int numb;
int counter = 0;

void dig()
{
	std::cout << "Enter a Number: ";
	std::cin >> numb;
	system("cls");

	bool IsNumLimit = false;

	if (!IsNumLimit)
	{
		std::cout << "The Number Exceeds The 10 Digit Limit";
		Sleep(2000);
		system("cls");
	}

	else if (numb == 0)
	{
		std::cout << "You've selected 0.";
		Sleep(2000);
		system("cls");
		IsNumLimit = true;
	}
	else
	{
		
		if (numb < 0)
		{
			numb *= -1;
		}
		while (numb > 0 && counter <= 10)
		{
			numb /= 10;
			counter++;
			IsNumLimit = true;
		}
		std::cout << "The Number Has " << counter << " digits.";
		Sleep(2000);
		system("cls");
	}	
}
