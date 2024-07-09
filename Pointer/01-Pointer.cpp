
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p; // * is only used for declaration of pointer
    p = &a; // & is used for address and also for initialization

    cout << a << endl;
    cout << "using pointer " << *p << endl; // *p means that it go to that addrress and take value
    return 0;
}