// example of arrays, and functions using arrays

#include <iostream>
using namespace std;

void PrintArray(const int[] , const int);
void SwapElements(int[] , int, int);

int main()
{
   int list1[5] = {2, 6, 9, -10, 12};		// array of 5 integers
   int i;					// for loop indexing

   int list2[20];			// array size 20, uninitialized


   cout << "\nlist1 = ";
   PrintArray(list1, 5);
   cout << "\n";

   // compute the sum of the list elements
   int total = 0;
   for (i = 0; i < 5; i++)
      total = total + list1[i];
 
   cout << "Sum of list1 elements = " << total << '\n';
   
   // initialize the array to 2, 4, 6, 8, 10, ...
   for (i = 0; i < 20; i++)
      list2[i] = 2 * i + 2;

   cout << "\nlist2 = ";
   PrintArray(list2, 20);		// display the contents
   cout << '\n';

   // create a third list, and get user to enter the data
   int list3[10];
   cout << "Enter 10 integer values: ";
   for (i = 0; i < 10; i++)
      cin >> list3[i];			// user enter the items

   cout << "\nlist3 = ";
   PrintArray(list3, 10);		// display the contents
   cout << '\n';
   
   // find the largest element of list3
   int max = list3[0];			// largest so far
   for (i = 1; i < 10; i++)
      if (list3[i] > max)
          max = list3[i];

   cout << "Largest number in list3 is:  " << max << '\n';

   cout << "Swapping elements 4 and 7\n";
   SwapElements(list3, 4, 7);
   cout << "\nlist3 = ";
   PrintArray(list3, 10);
   cout << "\n\n";

   return 0;
}

void PrintArray(const int arr[], const int size)
{
   int i;

   cout << "{ ";
   for (i = 0; i < size-1; i++)
       cout << arr[i] << ", ";

   cout << arr[size-1] << " }";		// print last item
}

void SwapElements(int arr[] , int a, int b)
// swap arr[a] and arr[b]
{
   int temp;
   temp = arr[a];
   arr[a] = arr[b];
   arr[b] = temp;
}

