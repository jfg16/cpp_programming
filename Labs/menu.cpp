#include <iostream>
using namespace std;

int main()
{
        char choice, horc;

        cout << "Welcome to the Fast Food Menu! \n";
        cout << "Do you want food? (Type y for yes, n for no) ";
        cin >> choice;

                while(choice == 'y')
                {
                        cout << "Do you want hamburger (Type h) or cheeseburger (Type c): ";
                        cin >> horc;

                        if(horc == 'h')
                                cout << "Hamburger coming right up! \n";
                        if(horc == 'c')
                                cout << "Cheeseburger coming right up! \n";
                        if(horc != 'c' && horc != 'h')
                        {
                                cout << "Error, please try again. \n";
                        }
                }

                if(choice == 'n')
                        cout << "You are missing out! \n";
                if(choice != 'y' && choice != 'n')
                {
                        cout << "Error, please try again. \n";
                }

        cout << "Thanks for stopping by! \n";
        return 0;
}
