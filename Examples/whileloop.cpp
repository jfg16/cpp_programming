#include <iostream>
using namespace std;

int main()
{
        int x = 1;

        while(x <= 100)
        {
                cout << x << " ";

                if(x%10 == 0)
                        cout << endl;

                x++;
        }
}