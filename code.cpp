#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double thing = 4; //automatic type conversion would store 4.0

        int x = 4.58375;

        cout << showpoint << thing << endl;
        cout << x << endl;

        return 0;
}
