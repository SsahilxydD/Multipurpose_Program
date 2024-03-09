#include <iostream>
#include <cstdlib> 
#include "calculator.h"
#include "LeapYear.h"
#include "DivisibleCalculator.h"
#include "DigistCounter.h"
#include "reverse.h"
#include "factorial.h"
#include "multiplication.h"
#include "rect.h"
#include "triangle.h"

int main()
{

    while (true)
    {
        char inp;
        std::cout << "Select an Application to Use:-\n\n"
            << "1. Calculator\n\n"
            << "2. Leap Year and Days in a Month Identifier.\n\n"
            << "3. Divisibility Checker (Customizable Range).\n\n"
            << "4. Digits Calculator in a Number (Limit = 10 digits).\n\n"
            << "5. Number reverser.\n\n"
            << "6. Factorial Calculator.\n\n"
            << "7. Multiplication Table.\n\n"
            << "8. Draw a Rectangle.\n\n"
            << "9. Draw a Triangle.\n\n"
            << "Option : ";
        std::cin >> inp;
        system("cls");

        if (inp == '1')
        {
            // Assuming Calculator() is a function or method in calculator.h
            Calculator(); 
            if (invalidInput == true)
            {
                break;
            }
        }

        else if (inp == '2')
        {
            
            Leap(); 
            if (Invalid == true)
            {
                break;
            }
        }

        else if (inp == '3')
        {
            
            div(); 
        }

        else if (inp == '4')
        {
            
            dig(); 
        }
        else if (inp == '5')
        {
            
            rev(); 
        }
        else if (inp == '6')
        {
            
            fact(); 
        }
        else if (inp == '7')
        {
            
            mult(); 
        }
        else if (inp == '8')
        {
            
            rect(); 
        }
        else if (inp == '9')
        {
            
            tria(); 
        }
        else
        {
            std::cout << "Invalid Input!";
            Sleep(2000);
            system("cls");
        }
    }
}

