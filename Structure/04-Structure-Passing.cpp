#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

void printDob(int, int, int); // function prototype

int main()
{
    date dob;
    cout << "Enter the Day: ";
    cin >> dob.day;
    cout << "Enter the Month: ";
    cin >> dob.month;
    cout << "Enter the Year: ";
    cin >> dob.year;

    printDob(dob.day, dob.month, dob.year); // function call

    cout << endl;
    return 0;
}
void printDob(int a, int b, int c) // function definition
{
    cout << "\nDate of Birth in DD-MM-YYYY Format = " << a << "-" << b << "-" << c;
}