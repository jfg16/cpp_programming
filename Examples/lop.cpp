#include <iostream>
using namespace std;

int main()
{

        //assume the user always gives 7 letters to transform
        //print the phone numbe in the form xxx-xxxx
        //Get CODE 538-2633

        char let, choice;
        int count;

        do{

                count = 1;
                cout << "Enter a phone number in letters: ";

                while(count <= 7)
               {
                        //read in next char
                        cin >> let;
                        //transform char
                        let=toupper(let);

                        switch(let)
                        {
                                case'A':
                                case'B':
                                      cout << "1"; break;


                        }//end of switch

                        if(count == 3)
                                cout << "-";

                        //increment
                        count++;

                }//end of while loop

                cin.ignore(100, '\n');
                cout << endl;

                cout << "Would you like to enter another number (Y/N): " ;
                cin >> choice;

        }while(choice == 'Y');

        return 0;

}