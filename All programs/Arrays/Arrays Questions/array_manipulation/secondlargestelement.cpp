// find the second largest element in the given array.

#include <iostream>
using namespace std;

int largestElementIndex(int arr[], int size)
{

    int max = INT_MIN; // INT_MIN in C/C++(constants in teger datatypes)
    // INT_MIN is a macro that specifies that an integer variable cannot store any value below this limit. It represents the minimum value or the lower limit of the integer data type. The value of INT_MIN is: INT_MIN = –2147483648 (for 32-bit Integers)

    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{

    int arr[] = {2, 3, 5, 7, 6, 1};
    int indexoflargest = largestElementIndex(arr, 6);
    cout << arr[indexoflargest] << endl;

    arr[indexoflargest] = -1;
    int indexofsecondlargest = largestElementIndex(arr, 6);
    cout << arr[indexofsecondlargest] << endl;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////

// my approach for finding the largest element in array and replacing it with -1. (without using function)

// int main(){
//  int arr[]={2,3,5,7,6,1};
//  int n=sizeof(arr)/sizeof(arr[0]);
//  int max=0;

// for(int i=0; i<n; i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
// }
// for(int i=0; i<n; i++){
//     if(arr[i]==max){
//         arr[i]=-1;
//     }
// }
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }

// output: 2 3 5 -1 6 1

//     return 0;
// }