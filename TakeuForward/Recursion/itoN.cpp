#include<bits/stdc++.h>
using namespace std;


void Series(int i, int N){
    if(i>N)return;

    cout<<i<<" ";

    Series(i+1,N);
}


int main(){

    int N;
    cin>>N;

    Series(1,N);

    return 0;
}

// Input: 5
// Output: 1 2 3 4 5
// Time Complexity: O(n)
// Space Complexity: O(n)


//for N to i 

#include<bits/stdc++.h>
using namespace std;

void Series(int i){

    if(i<1)return;
    cout<<i<<" ";

    Series(i-1);
}

int main(){

    int i;
    cin>>i;

    Series(i);
    return 0;
}

// Input: 5
// Output: 5 4 3 2 1
