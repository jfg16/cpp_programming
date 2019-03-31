/* Name: Jonathan Garcia
Date: 2/12/19
Section: 3
Assignment: Homework 3
Due Date: 1/15/19
About this project: Create a program to take in integer parameter, compute it, and returns the sum.
Assumptions: User will enter single digits and integers solely.

All work below was performed by (Jonathan Garcia) */

//PreProcessor Directives (includes and using statements)
#include <iostream>
#include <cmath>
using namespace std;

//Function DECLARATIONs
int AddDigits(int teger);

int main()
{
    //Your main() code that will call AddDigits inside of a loop
    int teger;

    do {
        teger = 0;
        cout << "\nPlease enter an integer (0 to quit): ";
        cin >> teger;

        if(teger != 0)
            cout << "\nThe sum of the digits of " << teger << " is " << AddDigits(teger) << "\n";
        else
            cout << "Goodbye!\n\n";
    }while(teger != 0); 
        
    return 0;
}

//Function DEFINITION for AddDigits goes here
int AddDigits(int teger)
{
    teger = abs(teger);
    int answer = 0;
    
    do {
        answer = answer + teger % 10; //this is how you get the last digit
        teger = teger / 10; //this is how you get rid of the last number
    }while(teger > 10);

    answer = answer + teger;

    return answer;
}