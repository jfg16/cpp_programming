#include <iostream>
using namespace std;

char GetALetter(); 
void PrintQuotient(int x, int y); 
void KillSomeTime();  

int main()
{
   char result;
   result = GetALetter();	// no parameters, but returns a char

   PrintQuotient(9, 5);		// void function.  call by itself
   PrintQuotient(5, 0);

   cout << "Before KillSomeTime() is called\n";
   KillSomeTime();
   cout << "After KillSomeTime() is called\n";

   return 0;
}

char GetALetter()
{
  bool isLetter;
  char let;
  do
  {
    cout << "Please enter a letter of the alphabet: ";
    cin >> let;
    isLetter = (let >= 'A' && let <= 'Z') || (let >= 'a' && let <= 'z');

    if (!isLetter)
 	cout << "Not a letter.  Try again.\n";

  } while (!isLetter);

  return let;
}


void PrintQuotient(int x, int y)
{
   if (y == 0)
   {
      cout << "I'm not going to divide by 0 !\n";
      return;
   } 

   cout << "The quotient of " << x << " divided by " << y << " is: " 
			<< (x / y) << '\n';
}

void KillSomeTime()
// this function is going to just delay a little
{
   int x = 0, y;
   while (x < 1000000000)
   {
      y = x * x;
      x++;
   }

}