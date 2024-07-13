//Given an array of integerts 'a', move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.

//fxn similar to "Dutch National Flag" problem.
//here sorting by parity 
/*
 Sorting by parity means arranging the elements of a given collection (such as an array or vector) so that all even numbers appear before all odd numbers. Parity refers to whether a number is even or odd:

Even numbers are integers that are divisible by 2 (e.g., 2, 4, 6).
Odd numbers are integers that are not divisible by 2 (e.g., 1, 3, 5).
Example of Sorting by Parity
Given an array: [3, 1, 2, 4, 7, 6]

After sorting by parity, the array might look like: [2, 4, 6, 3, 1, 7].

In this sorted array:

All even numbers (2, 4, 6) are placed before all odd numbers (3, 1, 7).
 */


#include<iostream>
#include<vector>
using namespace std;

void sortByParity(vector<int> &v){

    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){

        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr++],v[right_ptr--]);
        }

        if(v[left_ptr]%2==0){
            left_ptr++;
        }

        if(v[right_ptr]%2!=0){
            right_ptr--;
        }
    }
    return;
}


int main(){

    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    sortByParity(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}