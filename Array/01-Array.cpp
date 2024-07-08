#include <iostream>
#include <stdio.h>

using namespace std;

// Input from array & size of array
int main()
{
    int n;
    cout << "Enter Size";
    cin >> n;
    int A[n];
    A[0] = 2;

    for (int x : A)
    {
        cout << x << endl;
    }
}