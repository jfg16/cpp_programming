/* Name: Jonathan Garcia
Date: 2/15/19
Section: 3
Assignment: Homework 3
Due Date: 1/15/19
About this project: Converting foreign currency to USD Dollars
Assumptions: User inputs correct menu options and valid dollar amounts                

All work below was performed by (Jonathan Garcia) */

#include <iostream>
#include <iomanip>
using namespace std;

//Function DECLARATIONS
double toUSD(double foreign, char conver);
void menu();

//Your main() code that will call toUSD & menu inside of a loop
int main()
{
    char choice, conver;
    double foreign, ans, total=0;

    cout << "Welcome to the currency exchange calculator!";
    menu();

    cout << "> ";
    cin >> choice;

    switch(choice) 
    {
        case '1': 
            //converting 1 foreign amount to USD
            cout << "What amount would you like to convert? > ";
            cin >> foreign;
            cout << "P - Pound     E - Euro     Y - Yen\n";
            cout << "> ";
            cin >> conver;

            cout << foreign << " " << conver << " converts to " << toUSD(foreign, conver) << " US Dollars." << endl;
            break;
        case '2': 
            //converting 2 foreign amounts, adding them and displaying as USD
            //first input
            cout << "Enter type of first currency    P - Pound       E - Euro        Y - Yen\n";
            cout << "> ";
            cin >> conver;

            cout << "Enter amount of first currency";
            cout << "< ";
            cin >> foreign;

            ans = toUSD(foreign, conver);
            total = total + ans;
            
            //second inputs
            cout << "Enter type of second currency    P - Pound       E - Euro        Y - Yen\n";
            cout << "> ";
            cin >> conver;

            cout << "Enter amount of second currency";
            cout << "< ";
            cin >> foreign;

            ans = toUSD(foreign, conver);
            total = total + ans;

            cout<<"This would equal " << total << " US dollars" << endl;
            break;
        case '0':
        default:
            break;
    }
    
    cout << "\nGoodbye!\n";
}

//Function DEFINITION for toUSD() goes here
double toUSD(double foreign, char conver)
{
    double ans;
    
    //Converts yen, euro, or pounds
    if(conver == 'P' || conver == 'p')
    {
        ans = foreign / 0.77;
    } else if (conver == 'E' || conver == 'e'){
        ans = foreign / 0.88;
    } else if (conver == 'Y' || conver == 'y'){
        ans = foreign / 109.74;
    }//return amount of money in USD (double)

    return ans;
}

//Function DEFINITION for menu() goes here
void menu()
{
    cout << "\nPlease select one of the following options: ";
    cout << "\n1 - Convert foreign Amount to USD";
    cout << "\n2 - Add foreign amounts";
    cout << "\n0 - Quit";
    cout << "\n-----------------------------------\n";
}