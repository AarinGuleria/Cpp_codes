#include<iostream>
#include<vector> 
using namespace std;

int main(){
    
    //for loop//
     //method1: by defining a size to the vetor
    // vector<int> v(5);

    // for(int i =0; i<5; i++){
    //     cin>>v[i];
        
    // }

    // for(int i=0; i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

     //method2
    vector<int> v;

    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);

    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

    //while loop
    int i=0;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
    
    return 0;
}