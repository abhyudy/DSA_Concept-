// Reference is only present in cpp.

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // reference
    cout << a << endl;
    r++;
    cout << r;
}