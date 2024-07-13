//Sort an array consisting of only 0s and 1s.
//vector approach

#include<iostream>
#include<vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v)
/*
&v - pass by reference because: 
    we need to do change in the same vector , even if we were not doing any changes in the same its a good practice to pass vector by reference because when we pass by reference it does not create and extra copy of our vector in the memory and the actual address of the vector is only passed , due to which there is no wastage of memory.
*/ 
{ 
    int zeroes_count =0;

    //counting zeros
    for(int ele:v){
        if(ele==0){
            zeroes_count++;
        }    
    }

    //filling the vector with 0s and 1s
    for(int i=0; i<v.size(); i++){
        if(i<zeroes_count){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }

}


int main(){

    int size;
    cin>>size;

    vector<int> v;

    for(int i=0; i<size; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    sortZerosAndOnes(v);

    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
