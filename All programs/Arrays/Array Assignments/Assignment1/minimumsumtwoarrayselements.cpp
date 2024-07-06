#include <iostream>
using namespace std;

int findMinSum(int a[], int b[], int size)
{
    // initialize min_sum with the sum of the first and second elements
    // from the arrays a[] and b[]
    int min_sum = a[0] + b[1];

    // initialize min1 and min2 with the first two elements from array a[]
    // and b[] respectively
    int min1 = a[0];
    int min2 = b[1];

    // initialize i with 0, since we already have considered a[0]
    int i = 0;

    // loop over the array a[]
    for (i = 1; i < size; i++)
    {
        // check if the sum of the new element from the array a[] and the
        // minimum value from the array b[] is less than the current min_sum
        if (a[i] + b[1] < min_sum)
        {
            // update min_sum with the new sum
            min_sum = a[i] + b[1];
            // update min1 with the new element from the array a[]
            min1 = a[i];
        }

        // check if the sum of the minimum value from the array a[] and the
        // new element from the array b[] is less than the current min_sum
        if (b[i] + a[1] < min_sum)
        {
            // update min_sum with the new sum
            min_sum = b[i] + a[1];
            // update min2 with the new element from the array b[]
            min2 = b[i];
        }
    }

    // check if the minimum value from the array a[] is less than the minimum value from the array b[]
    if (min1 < min2)
    {
        // return the sum of the minimum value from the array a[] and the second minimum value from the array b[]
        return min1 + b[0];
    }
    else
    {
        // return the sum of the minimum value from the array b[] and the second minimum value from the array a[]
        return min2 + a[0];
    }
}

int main()
{
    int a[10] = {1, 5, 9, 11, 15, 19, 21, 25, 35, 45};
    int b[10] = {2, 6, 10, 12, 16, 20, 22, 26, 36, 46};

    int size = 10;

    cout << "The minimum sum of two elements is: " << findMinSum(a, b, size) << endl;

    return 0;
}

// Here's how this code works:

// Initialize the min_sum variable with the sum of the first and second elements from arrays a[] and b[], respectively.
// Initialize the min1 variable with the first element from array a[] and the min2 variable with the second element from array b[].
// Loop over the array a[] and at each step, compare the sum of the new element from array a[] and the minimum value from array b[] with the current min_sum value. If the new sum is less than the current min_sum, update min_sum with the new sum and update min1 with the new element from array a[].
// Loop over the array b[] and at each step, compare the sum of the minimum value from array a[] and the new element from array b[] with the current min_sum value. If the new sum is less than the current min_sum, update min_sum with the new sum and update min2 with the new element from array b[].
// After the loop, check if the minimum value from array a[] is less than the minimum value from array b[]. If it is, return the sum of the minimum value from array a[] and the second minimum value from array b[]. Otherwise, return the sum of the minimum value from array `

