#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

        double radius;

        cout << "Enter the radius: ";
        cin >> radius;

        double area = radius*radius*3.14;
        cout << "The area is: " << area << setprecision(2) << "\n";
        double circumference = radius*2*3.14;
        cout << "The circumference is: " << circumference << setprecision(2) << "\n";

}