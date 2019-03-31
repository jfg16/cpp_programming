/* Name: (Jonathan Garcia)
Date: (1/22/19)
Section: (3)
Assignment: (Homework 1)
Due Date: (1/23/19)
About this project: (A calculator to assist FSU calculate ticket sales for seniors, adult$
Assumptions: (User will input a number)

All work below was performed by (Jonathan Garcia) */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

        cout << "\n***FSU Football Ticket Calculator***\n";

        const double sen = 16.50;
        double sennumber;
        const double adu = 28.50;
        double adunumber;
        const double chi = 12.50;
        double chinumber;
        const double tax = 7;

        cout << "Please enter the number of: \n\tAdults\n\tChildren(up to age 9)\n\tSenio$
        cout << "Adults --> ";
        cin >> adunumber;
        cout << "Children --> ";
        cin >> chinumber;
        cout << "Seniors --> ";
        cin >> sennumber;

        cout << "\n-------------------------------\n";
        double total = (adunumber*adu)+(chi*chinumber)+(sen*sennumber);
        cout << "TOTAL (before tax) = " << total << setprecision(4) << "\n";
        double taxtotal = (tax*total)/100;
                cout << "Tax = " << taxtotal << setprecision(3) << "\n";
        double finaltotal = total+taxtotal;
        cout << "TOTAL COST (after tax) = " << finaltotal << setprecision(4) << "\n";

        cout << "\nThanks for using the ticket system!\n\n";
        
}