// Rotate the given array 'a' by k steps, where k is non-negative.NOTE: k can be greater than n as well where n is the size of array 'a'.

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    // k can be grater than n
    k = k % n;

    int ansarray[5];
    int j = 0;

    // inserting last k elements in ans array
    for (int i = n - k; i < n; i++)
    {
        ansarray[j++] = arr[i];
    }

    // inserting first n-k elements in ans array
    for (int i = 0; i <= k; i++)
    {
        ansarray[j++] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ansarray[i] << " ";
    }
    cout << endl;

    return 0;
}