//Count the number of occurences of a particular  element x. 


#include<iostream>
#include<vector>
using namespace std;

int main(){

    //method1 my approach
    // vector<int> v(6);

    // for(int i=0; i<6; i++){
    //     cin>>v[i];
    // }
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"Enter the number : ";
    // int x;
    // cin>>x;
    // int occurance=0;
    // int count=0;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==x){
    //         occurance=i;
    //         count++;
    //     }
    //     else{
    //         cout<<"Number not present";
    //     }
    // }    

    // cout << "The number of occurrence of " << x << " is: " << count << endl;


    //mam appraoach
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int occurances=0;

    for( int ele:v){
        if(ele==x){
            occurances++;
        }
    }
    cout<<occurances<<endl;
    

    return 0;
}