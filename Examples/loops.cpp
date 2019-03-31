#include <iostream>
using namespace std;

int main()
{
        int x;
        int tries = 0;

        cout << "Please enter a positive number: " ;
        cin >> x;
        tries++;

        while(x < 1)
        {
                cout << "Try again ..." << endl;
                cin >> x;
                tries++;

                if(tries == 3)
                        cout << "Come on man... " << endl;
        }

        cout << "You listened! bravo." << endl;

        return 0;
}

