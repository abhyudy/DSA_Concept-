#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements in the array
    cout << (isSorted(a, n) ? "true" : "false") << endl;
    return 0;
}
