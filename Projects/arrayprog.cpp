/* Name: Jonathan Garcia
Date: 3/16/19
Section: 3
Assignment: Homework 5
Due Date: 3/15/19
About this project: A program designed to construct an array and use functions to perform certain actions.
Assumptions: User will input correct letter choices for menu.

All work below was performed by (Jonathan Garcia) */

//PreProcessor Directives
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*Given Global CONST variables reperesnting MAX and MIN size 
array in program is able to be within. 
Use these variables throughout your program whenever referring to 
the array's MAX and MIN size bounds*/
const int MAX = 40;
const int MIN = 5;

/*Given Function prototypes*/
void PrintArray (const int arr[], const int size);
//Function DECLARATIONs
void Shift(const int arr[], const int size, int shift);
void Delete(const int arr[], const int size, int index);
void Reverse(const int arr[], const int size);

/*Your function prototypes here*/

int main()
{
	int arr[MAX], size, shift, index; //creation of array, with max size MAX.
    char choice;
    srand(0);
	
	cout << "Welcome to the array manipulator!\n";
	//Promput user for starting current size of array (between MIN and MAX).
	cout << "How big would you like to make your array?\n";
    cout << "Enter a value 5 --> 40: ";
    if(size >= MIN && size <= MAX){
            cin >> size;
    } else {
        cout << "Enter a value 5 --> 40: ";
    }
	
	//Enter a loop that presents the user with the menu and manipulates array based on menu choice.
    do{

        cout << "MENU:  (or SELECT Q to QUIT) \n";
        cout << "F - Fill Array: RANDOM values 1 - 100\n";
        cout << "R - Reverse Array Contents\n";
        cout << "X - Shift Right\n";
        cout << "C - Change Array Element\n";
        cout << "D - Delete Array Element\n";
        cout << "A - Print Average\n";
        cout << "M - Print Max Value\n";
        cout << "G - Grow Array Size by 5\n";
        cout << "S - Shrink Array Size by 5\n";
        cout << "P - Print Array \n";
        cout << "---------------------------\n";
        cout << "Selection > ";
        cin >> choice;

        choice = toupper(choice);

        switch(choice){
            case 'F': 
                {
                    for (int i = 0; i < size-1; i++)
                    arr[] = rand() % 100 + 1;

                    break;
                }
            case 'R':
                {
                    Reverse(arr[], size)
                    break;
                }
            case 'X':
                {
                    Shift(arr[], size, shift);
                    break;
                }
            case 'C':
                {
                    int replac;

                    cout << "What index number would you like to replace: ";
                    cin >> index;
                    cout << endl;
                    cout << "Replace it with what number: ";
                    cin >> replac;
                    cout << endl;

                    replace(arr[0], arr[size], arr[index], replac);
                    break;
                }
            case 'D':
                {
                    cout << "What index number would you like to delete: ";
                    cin >> index;
                    cout << endl;

                    Delete(arr[], size, index);
                    break;
                }
            case 'A':
                {
                    double sum, average;
                
                    for(int i = 0; i < size; ++i)
                    {
                        sum += arr[i];
                    }

                    average = sum / size;
                    cout << "The average is: " << average << endl;
                    break;
                }
            case 'M':
                {
                    int temp = 0;
                    for(int i=0; i<size; i++)
                    {
                        if(arr[i]>temp)
                        temp=arr[i];
                    }
                
                    cout << "The max number is: " << temp << endl;
                    break;
                }
            case 'G':
                {
                    if(size >= MIN && size <= MAX){
                        size = size + 5;
                    }else {
                        cout << "Cannot Grow Array. Current Size: " << size << " Maximum Size: 40\n";
                    }
                    
                    for (int i=0; i<size; i++)
                        {
                            arr[i] = 0;
                        }
                    
                    cout << "Array size is now: " << size;

                    break;
                }
            case 'S':
                {
                    if(size >= MIN && size <= MAX){
                        size = size - 5;
                    } else {
                        cout << "Cannot Shrink Array. Current Size: " << size << " Minimum Size: 5\n";
                    }

                    cout << "Array size is now: " << size;

                    break;
                }
            case 'P':
                {
                    PrintArray(arr[], size);
                    break;
                }
            default:
                break;
        }

    }while(choice != 'Q');
	
    out:
    cout << "Goodbye!";
	return 0;
}


/*Your function declarations here*/
void Delete(const int arr[], const int size, int index) {
    index--;

    for(int position=0; position<size-1; position++)
    {
        arr[position] = 0;
    }
}

void Reverse(const int arr[], const int size) {
    int temp, i;
    for (i = 0; i < size/2; ++i) {
        temp = arr[size-i-1];
        arr[size-i-1] = arr[i];
        arr[i] = temp;
    }
    for (i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

void Shift(const int arr[], const int size, int shift) {
    int temp = arr[0];

    for (int i = 0; i<(size + shift); i++)
    {
        arr[i] = arr[i+1] ;
    }
    
    arr[size - 1] = temp;
}


//This function prints the contents of any interger array of any size seperated by commas
void PrintArray(const int arr[], const int size)
{
	cout << "\nThe array:\n { ";
	for (int i = 0; i < size-1; i++)	// for loop, prints each item (not last due to comma handling)
		cout << arr[i] << ", ";

	cout << arr[size-1] << " }\n\n";	// prints last item , no comma
}