#include <iostream>
using namespace std;

void Func(int x, int y, int z = 5);  // counts as a function
					// with 2 ints, and with 3 ints

int main()
{
   int a = 10, b = 20, c = 30;
   Func(a, b, c);	// call with all 3 params
   Func(5, 4, 3);

   Func(a, b);		// call with 2 params, optional param takes default
   Func(1, 2);

   return 0;
}

void Func(int x, int y, int z)
{ 
  cout << "** Inside Function **\n";
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "z = " << z << '\n';
  cout << "** Leaving Function **\n";
}
