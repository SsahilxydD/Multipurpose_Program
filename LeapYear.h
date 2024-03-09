#pragma once
#include <iostream>
#include <Windows.h>

bool Invalid = false;

void Leap()
{	
	int year, month;
	std::cout << "Select A Year : ";
	std::cin >> year;
	system("cls");
	std::cout << "Select The Number of Month : ";
	std::cin >> month;
	system("cls");

	switch (month)
	{
	case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? std::cout << "It Is A Leap Year With 29 days in February." : 
	std::cout << "It Is not a Leap Year and has 28 days in February."; Sleep(2000); system("cls"); Invalid = false; break;
	case 4:std::cout << "The Month is April, It is a month with 30 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 6:std::cout << "The Month is June, It is a month with 30 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 9:std::cout << "The Month is September, It is a month with 30 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 11:std::cout << "The Month is November, It is a month with 30 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 1:std::cout << "The Month is January, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 3:std::cout << "The Month is March, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 5:std::cout << "The Month is May, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 7:std::cout << "The Month is July, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 8:std::cout << "The Month is August, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 10:std::cout << "The Month is October, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	case 12:std::cout << "The Month is December, It is a month with 31 days"; Sleep(2000); system("cls"); Invalid = false; break;
	default:
	{
		std::cout << "Please Enter Suitable Year Or Month.\n\nPress any key to Close.";
		invalidInput = true; Invalid = true;
		system("pause > nul");
		system("cls");
		break;
	}
	}		
}			
