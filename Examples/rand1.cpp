#include <iostream>
#include <cstdlib>	// for srand(), rand()
#include <ctime>	// for time()

using namespace std;

int main()
{
  srand(time(0));	// seed the random number generator
  int r;

  r = rand();
  cout << "The random number chosen (no range specified) is: " << r << '\n';

  r = rand() % 10;
  cout << "A random number in the range (0-9):  " << r << '\n';

  r = rand() % 50 + 51;
  cout << "A random number in the range (51-100):  " << r << '\n';

  return 0;
}