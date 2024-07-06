#include <iostream>
using namespace std;

int val(int arr[], int n)
{
    int sumofarray = 0;

    // we used n-1 because one element is missing here
    for (int i = 0; i < n - 1; i++)
    {
        sumofarray += arr[i];
    }

    int sumofseries = n * (n + 1) / 2;
    int missing = sumofseries - sumofarray;

    return missing;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing no. from the array is: " << val(arr, n);

    return 0;
}