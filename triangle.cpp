#include "triangle.h"
#include <iostream>
#include <iomanip>
using namespace std;

int i;
int j;

void triaNormal()
{
	int length;
	cout << "Enter Length : ";
	cin >> length;
	system("cls");

	char symbol;
	cout << "Enter any Symbol : ";
	cin >> symbol;
	system("cls");

	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
}

void triaInversed()
{
	int length;
	cout << "Enter Length : ";
	cin >> length;
	system("cls");

	char symbol;
	cout << "Enter any Symbol : ";
	cin >> symbol;
	system("cls");

	for (int i = length; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
}

void tria()
{
	char in;
	std::cout << "Select an Option\n\n";
	std::cout << "1. Normal triangle.\n\n";
	std::cout << "2. Inversed triangle.\n\n";
	std::cout << "Option : ";
	std::cin >> in;
	system("cls");
	if (in == '1')
	{
		triaNormal();
	}
	else if (in == '2')
	{
		triaInversed();
	}
	std::cout << "\n\n"
		<< "Press Enter To Continue.";
	system("pause>0");
	system("cls");
}