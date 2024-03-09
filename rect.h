#pragma once
#include <iostream>
#include <iomanip>


void rect()
{
	int height, width;
	char symbol;
	std::cout << "Enter Height : ";
	std::cin >> height; std::cout << std::endl;

	std::cout << "Enter Width : ";
	std::cin >> width; std::cout << std::endl;
	
	std::cout << "Select a symbol : ";
	std::cin >> symbol;

	for (int h = 0 ; h < height ; h++)
	{
		for (int w = 0; w < width; w++)
		{
			std::cout << "   " << symbol;
		}
		std::cout << std::endl;
	}
	std::cout << "\n\n"
		<< "Press Enter To Continue.";
	system("pause>0");
	system("cls");
}
