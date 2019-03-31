#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x = 9.0, y = 16.0, z;

  cout.setf(ios::fixed);
  cout.precision(1);

  z = sqrt(36.0);	// sqrt returns 6.0 (gets stored in z)
  cout << "z = " << z << '\n';

  z = sqrt(x);		// sqrt returns 3.0 (gets stored in z)
  cout << "z = " << z << '\n';

  z = sqrt(x + y);	// sqrt returns 5.0 (gets stored in z) 
  cout << "z = " << z << '\n';

  // sqrt returns 10.0, which gets printed
  cout << "Square root of 100: " << sqrt(100.0) << '\n';	

  // because of automatic type conversion rules we can send an int where a 
  //  double is expected.  This call returns 7.0
  cout << "sqrt(49) returns " << sqrt(49) << '\n';     

  // in this last one, sqrt(625.0) returns 25.0, which gets sent as the
  //  argument to the outer sqrt call.  This one returns 5.0, which gets
  //  printed
  cout << "sqrt(sqrt(625.0)) = " << sqrt(sqrt(625.0)) << '\n';	

  return 0;


}