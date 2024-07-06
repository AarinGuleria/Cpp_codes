#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5}; 
    
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

// Approach 1: making another array and starting the traversal from the back of the original array and decrementing . space and time: O(n)

// Approach 2: two pointer approach where we take starting and ending .space: O(1) and time: O(n)
    int start=0;
    int end=size-1;
    while(start<end){

        swap(arr[start], arr[end]); // using inbuilt swap() fxn for swapping .  swap(a,b) -> becomes b,a. Or so that is.
        start++;
        end--;

        // int temp;
        // temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        // start++;
        // end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}