#include <iostream>
using namespace std;

double Average(double, double, double);

int i1, i2, i3;			// global variables
double x;			// global variable (bad idea)

int main()
{
   double a, b, c;	// local variables to main()
   double x, y, z;	// local variables to main()
			//  NOT the same x, y, z as in the Average function
			//  and NOT the same x as the global variable x

   a = 1.3;   b = 2.5;   c = 6.8;

   // arguments in a function call do NOT have to have the same
   //  names as formal function parameters

   x = Average(a, b, c);	// local x (to main()) being used here
   cout << "average = " << x << '\n';

   return 0;
}

double Average(double x, double y, double z)
// the variables x, y, and z are LOCAL variables to this function
//  NOT the same as the global x.
{
   double total;		// another LOCAL variable
   total = x + y + z;		// local x being used here
   return (total / 3.0);
}