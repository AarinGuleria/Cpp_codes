#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //prestoring 
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }
    
/*Populating the Hash Array: here in pre restoring

This is a for loop that iterates over each element of the input array arr.
The loop runs from i = 0 to i = n-1, where n is the size of the input array arr.
For each element arr[i] in the input array:
The value at the index arr[i] in the hash array is incremented by 1.
This effectively counts the occurrences of each number in the input array arr.
*/



    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)

