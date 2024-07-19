#include <stdio.h>
#include <iostream>
using namespace std;

#define msg "FACTORIAL\n"
typedef int INTEGER;

INTEGER num = 0, fact = 1, storeFactorial = 0;

INTEGER factorial(INTEGER num)
{

    for (INTEGER i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

INTEGER main()
{
    INTEGER Num = 5;

    storeFactorial = factorial(Num);
    cout << msg;
    cout << Num << "! = "
         << storeFactorial << endl;

    return 0;
}
