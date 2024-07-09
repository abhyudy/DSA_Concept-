#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
// Pointer to Array
int main()
{
    // int A[5] = {2, 3, 5, 6, 7}; //Create an array in stack
    int *p; // declaration
    // p = A;

    // Using malloc to print array in c lang
    // p = (int *)malloc(5 * sizeof(int)); // Create an array in heap

    // Using c++ lang
    p = new int[5];
    p[0] = 10;
    p[1] = 12;
    p[2] = 14;
    p[3] = 16;
    p[4] = 20;
    for (int i = 0; i < 5; i++)
        cout << p[i] << endl; // point is used in array
    delete[] p;               // deallocating memory that is allocated in a heap.

    return 0;
}