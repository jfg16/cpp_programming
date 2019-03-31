#include <iostream>
using namespace std;

// function PROTOTYPES listed here.  

int Sum(int x, int y, int z);
double Average (double a, double b, double c); 
bool InOrder(int x, int y, int z); 

// The prototypes above satisfy declare-before-use, so these functions can
//  be CALLED anywhere below this point.

int main()
{
   int i1, i2, i3;
   double d1, d2, d3;

   cout << "Input three integers: ";
   cin >> i1 >> i2 >> i3;
   cout << "Input three doubles: ";
   cin >> d1 >> d2 >> d3;

   // samples of function calls

   double avg;
   int total;
   total = Sum(i1, i2, i3);
   avg = Average(d1, d2, d3);

   cout << "The sum of the three integers = " << total << '\n';
   cout << "The average of the three doubles = " << avg << '\n';
 

   // note that we can place the call in the cout statements, which 
   //  prints the return values

   cout << "The sum of 10, 14, and 18 = " << Sum(10, 14, 18) << '\n';

   cout << "The average of 1.3, 2.7, and 6.9 = " 
				<< Average(1.3, 2.7, 6.9) << '\n';


   // Notice that we can pass in integers where doubles are expected
   //   legal via automatic-type-conversion rules

   cout << "The average of the three integers = " 
				<< Average(i1, i2, i3) << '\n';


   // Testing out the boolean function (InOrder)

   if (InOrder(i1, i2, i3))
	cout << "The three integers were typed in ascending order\n";
   else
	cout << "The three integers were NOT typed in ascending order\n";


   return 0;
}

// function definitions can appear in any order, since the prototypes
//  were listed at the top to handle declare-before-use

int Sum(int x, int y, int z)
// add the three parameters together and return the result
{  
   int answer;
   answer = x + y + z;
   return answer;
}
 
double Average (double a, double b, double c)
// add the parameters, divide by 3, and return the result
{
   return (a + b + c) / 3.0;
}

bool InOrder(int x, int y, int z)
// answers yes/no to the question "are these parameters in order,
//  smallest to largest?"  Returns true for yes, false for no.
//  (This kind of function often known as a "predicate function")
{
   if (x <= y && y <= z)
	return true;
   else
	return false;
}
