// Given a positive integer n, generate an (n xm) matrix filled with elements form 1 to n^2 in spiral order.
// 1 2 3
// 8 9 4
// 7 6 5

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > createSpiralMatrix(int n){
    vector<vector<int> > matrix(n, vector<int>(n));

    int left=0, right=n-1, top=0, bottom=n-1;
    int direction=0;
    int value = 1;

    while(left<= right && top<=bottom){
        
        if(direction==0){
            for(int i=left; i<=right; i++){
                matrix[top][i]= value++;
            }
            top++;
        }
        else if(direction==1){
            for(int j=top; j<=bottom; j++){
                matrix[j][right]= value++;
            }
            right--;
        }
        else if(direction==2){
            for(int i=right; i>=left; i--){
                matrix[bottom][i]= value++;
            }
            bottom--;
        }
        else{
            for(int j=bottom; j>=top; j--){
                matrix[j][left]= value++;
            }
            left++;
        }

        direction=(direction+1)%4;
    }

    return matrix;
}

int main(){

    int n;
    cin>>n;

    vector<vector<int> > matrix(n, vector<int>(n));

    matrix= createSpiralMatrix(n);
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}