#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

        double integer1;
        double integer2;
        double integer3;

        cout << "Please enter three numbers: \n";
        cin >> integer1 >> integer2 >> integer3;

        double addition = integer1+integer2+integer3;
        cout << integer1 << " + " << integer2 << " + " << integer3 << " = " << addition << "\n";

        double subtraction = integer1-integer2-integer3;
        cout << integer1 << " - " << integer2 << " - " << integer3 << " = " << subtraction << "\n";

        double multiply = integer1*integer2*integer3;
        cout << integer1 << " * " << integer2 << " * " << integer3 << " = " << multiply << "\n";

        return 0;

}
