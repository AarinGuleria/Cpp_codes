// Count the number of triplets whose sum is equal to the given value x

#include<iostream>
using namespace std;

int main(){

    //dryrun
    /* [3,1,2,4,0,6]
        targetsum=6
        triplets=0 -> 1 -> 2
        i=0 j=1 k=2
        arr[i]=3 -
        arr[j]=1
        arr[k]=2 -> 4 -> 0 -> 6 
        
        ansd so on ....*/

    int arr[]={3,1,2,4,0,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    int triplets=0;
    int targetsum = 5;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==targetsum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    triplets++;
                }
            }
        }
    }

    cout<<"The number of triplets whose sum is equal to the targetsum are: "<<triplets;

    return 0;
}