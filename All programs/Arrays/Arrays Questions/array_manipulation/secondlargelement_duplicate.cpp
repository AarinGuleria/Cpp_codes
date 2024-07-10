// find the second largest element in the given array.(when the array has duplicate elements)

#include <iostream>
using namespace std;


// method 1 given by mam(for loop was traversing 3 times)
// int largestElementIndex(int arr[], int size)
// {

//     int max = INT_MIN; 
//     INT_MIN in C/C++(constants in teger datatypes)
//     INT_MIN is a macro that specifies that an integer variable cannot store any value below this limit. It represents the minimum value or the lower limit of the integer data type. The value of INT_MIN is: INT_MIN = –2147483648 (for 32-bit Integers)

//     int maxindex = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }

//method 2 more (for loop traversing 2 times)
int secondLargestElement(int arr[], int size){

    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i]>second_max && arr[i]<max){
            second_max=arr[i];
        }
    }
    return second_max;
}

int main()
{

    int arr[] = {2, 3, 5, 7, 6, 1, 7};
    int n=7;
    
    cout<<"The second largest element in the array is: "<<secondLargestElement(arr, n)<<endl;

    return 0;
}