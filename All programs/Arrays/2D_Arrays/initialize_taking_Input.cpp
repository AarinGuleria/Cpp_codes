#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    int no_of_Elemnts_inarray= n*m;
    cout<<no_of_Elemnts_inarray<<endl;

    int array[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}