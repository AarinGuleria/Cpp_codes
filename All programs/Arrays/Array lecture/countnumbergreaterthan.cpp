//Count the number of elements strictly grater than value x;

#include<iostream>
#include<vector>
using namespace std;

int main(){

    //my approach
    // vector<int> v(5);

    // for(int i=0; i<5; i++){
    //     cin>>v[i];
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"Enter the number: ";
    // int x;
    // cin>>x;
    // int count=0;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]>x){
    //         cout<<v[i]<<endl;
    //         count++;
    //     }
    // }

    // cout<<"The count of number greater than "<<x<<" are "<<count<<endl;

    //mam approach
    vector<int> v(6);

    for(int i=0; i<6; i++){
        cin>>v[i];
    }

    cout<<"Enter x:";
    int x;
    cin>>x;

    int count=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}