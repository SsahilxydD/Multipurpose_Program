#include <iostream>
#include <cstdlib> 
#include "calculator.h"
#include "LeapYear.h"

int main()
{

    while (true)
    {
        char inp;
        std::cout << "Select an Application to Use:-\n\n"
            << "1. Calculator\n\n"
            << "2. Leap Year and Days in a Month Identifier.\n\n";
        std::cin >> inp;
        system("cls");

        if (inp == '1')
        {
            // Assuming Calculator() is a function or method in calculator.h
            Calculator(); // Make sure to pass necessary arguments if required
        }
        else if (inp == '2')
        {
            // Assuming Leap() is a function or method in LeapYear.h
            Leap(); // Make sure to pass necessary arguments if required
        }
        else
        {
            std::cout << "Invalid Input!";
            Sleep(2000);
            system("cls");
        }
    }
}

