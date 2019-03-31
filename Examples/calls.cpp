#include <iostream>  

using namespace std;

double Average(double x, double y);
char GetACharacter();
void PrintValues(int count, double amount);

int main()
{
   char c1, c2;
   double d1, d2, d3;
   int i1, i2;

   // are these calls LEGAL or ILLEGAL, syntactically?
   //   (put yourself in the compiler's shoes)

   Average(d1, d2); 
   c1 = Average(d1, d2);
   d1 = Average(d2, d3);
   d3 = Average(d2, i2);

   GetACharacter;

   c1 = GetACharacter;
   c2 = GetACharacter();   
   i1 = GetACharacter();  	

   PrintValues(int,double);
   i2 = PrintValues(i1, d1);
   PrintValues(i2, d2);
   PrintValues(d1, i2);
}

double Average(double x, double y)
{
   return (x + y) / 2.0;
}

char GetACharacter()
{
   char c;
   cin >> c;
   return c;
}

void PrintValues(int count, double amount)
{
   cout << "Here are the two values:\n";
   cout << "------------------------------------------\n";
   cout << '\t' << count << '\t' << amount << '\n';
}

