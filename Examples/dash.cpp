#include <iostream>
using namespace std;

int main()
{

    //declaration:
    void printdashes(int);

    //main 
    printdashes(5);
    printdashes(15);  // All three calls to the function
    printdashes(-5);

    //definition
    void printdashes(int x)
    {
        for(int i=0; i < x; i ++)
            cout << "-";

        return;
    }
}