#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    // Using Dot operator
    Rectangle r = {10, 15};
    cout << r.length << endl;
    cout << r.breadth << endl;

    // Pointer To a Structure
    Rectangle *p = &r;
    cout << p->breadth << endl;
    cout << p->length << endl;

    return 0;
}