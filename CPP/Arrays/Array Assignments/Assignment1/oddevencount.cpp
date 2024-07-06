#include <iostream>
using namespace std;

int main()
{
    int odd = 0, even = 0;
    int arr[] = {1, 2, 3, 4, 5};
    //    cout<<sizeof(arr)<<endl;

    int size = sizeof(arr) / sizeof(arr[0]);
    //    cout<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl; // printing the elements of array
    }

    cout << "even no of elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl; // printing even number
            even++; // incrementing the count 
        }
    }

    cout << "odd no of elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << endl;  // printing odd number
            odd++; //  incrementing the count
        }
    }

    cout << "odd count:" << odd << endl;
    cout << "even count:" << even << endl;

    return 0;
}