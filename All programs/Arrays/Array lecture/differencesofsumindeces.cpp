// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int array[]={1,2,1,2,1,2};

    int anssum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            anssum+=array[i];
        }
        else{
            anssum-=array[i];
        }   
    }
    cout<<" The difference btw sum of even indices and odd indices is: "<<anssum<<endl;
    return 0;
}