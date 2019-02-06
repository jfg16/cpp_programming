#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        int n, d;
        cout << "Enter a numerator --> " ;
        cin >> n;

        cout << "Enter a denominator --> " ;
        cin >> d;

        if(d!=0)
                cout << n << "/" << d << " = " << n/d << "\n";
        else
                cout << "Denominator cannot be 0\n";

}