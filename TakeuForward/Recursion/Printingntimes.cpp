#include<bits/stdc++.h>
using namespace std;

void repeatingNames(int i, int n){
    if(i>n){
        return;
    }
    cout<<"I am Iron"<<endl;;
    repeatingNames(i+1,n);
}


int main(){
    int n;
    cin>>n;
    repeatingNames(1,n);
    return 0;
}

// Input: 5
// Output:
// I am Iron
// I am Iron
// I am Iron
// I am Iron
// I am Iron

// Time Complexity: O(n)
// Space Complexity: O(n)
