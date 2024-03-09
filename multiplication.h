#pragma once
#include <iostream>
#include <Windows.h>
int sum;

void mult()
{
	using namespace std;
	for (int i = 1 ; i <= 10 ; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			
			cout << i << "*" << j << "=" << i*j << '\n';
		}
		cout << endl;
	}
	std::cout << "\n\n"
		<< "Press Enter To Continue.";
	system("pause>0");
	system("cls");
}
