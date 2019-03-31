/* Name: Jonathan Garcia
Date: 2/12/19
Section: 3
Assignment: Homework 3
Due Date: 1/15/19
About this project: Allows the user to input as many integers as wanted and prints summary of information at the end
Assumptions: User will input whole numbers

All work below was performed by (Jonathan Garcia) */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double inte, pos=0, neg=0, avg=0.0, sum=0.0;
    int input=0;

    cout << "\n";

    do {
        
        cout << "Enter any integer value, or 0 to quit: ";
        cin >> inte;
        
        //Counting positive & negative numbers
        if (inte > 0) {
            pos++;
        } else if (inte < 0) {
            neg++;
        }

        //Sum of integers inputted
        sum += inte;
        //Input counter
        if (inte != 0)
            input++;

    } while (inte != 0);

    cout << "\n";

    cout << "# of positives = " << pos << "\n"; //a part of the if, else if loop
    cout << "# of negatives = " << neg << "\n"; //a part of the if, else if loop

    //Sum comes from do while loop
    cout << "The sum is = " << sum << "\n";
    //Average is set with two decimal points and is equated to sum divided by input, which are from do while loop
    avg = sum/input;
    cout << "The average is = " << fixed << showpoint << setprecision(2) << avg << "\n\n";
    

    return 0;
}