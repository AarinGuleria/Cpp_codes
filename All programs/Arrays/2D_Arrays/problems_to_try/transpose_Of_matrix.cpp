// Write a program to display transpose of a matrix entered by the user.

#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;

    int array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    int tranpose_Array[m][n];
    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            tranpose_Array[i][j] = array[j][i];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            cout<<tranpose_Array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}