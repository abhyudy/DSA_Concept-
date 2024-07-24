#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] > ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int slargest = secondLargest(arr, n);
    int ssmallest = secondSmallest(arr, n);
    cout << " SecondLargest is " << slargest << endl;
    cout << " Second Smallest is " << ssmallest << endl;

    return 0;
}