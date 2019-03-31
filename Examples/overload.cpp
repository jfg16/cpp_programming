// simple overloading example

#include <iostream>
using namespace std;

int Process(double num);		  // function 1
int Process(char letter);              // function 2
int Process(double num, int position); // function 3

int main()
{
   int x;
   float y = 12.34;
   x = Process(3.45, 12);	// invokes function 3
   x = Process('f');		// invokes function 2
   x = Process(y);		// invokes function 1 (automatic type 

   return 0;
}

int Process(double num)
{
   cout << "function with double parameter runs\n"; 
   return 1; 
}
   
int Process(char letter)
{
   cout << "function with char parameter runs\n";
   return 2;
}
   
int Process(double num, int position)
{
   cout << "Function with 2 parameters runs\n";
   return 3;
}
