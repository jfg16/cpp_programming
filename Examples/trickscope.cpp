#include <iostream>  

using namespace std;

int main()
{
   cout << "\nStarting Program\n";
   {
	int x = 5;			

	cout << "x = " << x << '\n';
	{
	   int x = 8;
	   cout << "x = " << x << '\n';
	}
	cout << "x = " << x << '\n';
	{
	   x = 3;
	}
	cout << "x = " << x << '\n';
   }
}