#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int greatest = arr[0];
    int smallest = arr[0];

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        else if (arr[i] > greatest)
        {
            greatest = arr[i];
        }
    }

    cout << "sum of greatest and smallest integer from the given array is: " << (greatest + smallest) << endl;

    return 0;
}