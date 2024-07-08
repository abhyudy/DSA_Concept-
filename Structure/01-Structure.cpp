#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    /* defining of structure and 2 member present */
    int length;
    int breadth;
};

int main()
{
    // declaration and initialization
    struct Rectangle r1 = {10, 15};

    // change value method

    r1.length = 15;
    r1.breadth = 25;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    cout << " Size of member " << sizeof(r1) << endl;

    return 0;
}
