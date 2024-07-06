//Find the last occurrence of an element x in a given array

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(6);

    for(int i=0; i<6; i++){
       cin>>v[i];        
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the number: ";
    int x;
    cin>>x;

    int occurance= -1;
    //method1( traversing from begining, so searching last occurance of the particular number )
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurance=i;
        }
    }

    //mwthod2(traversing from end, so searching first occurance of the particular number )
    for(int i=v.size()-1; i=>0; i--){
        if(v[i]==x){
            occurance=i;
            break;
        }
    }
    cout<<occurance<<endl;

    return 0;
}