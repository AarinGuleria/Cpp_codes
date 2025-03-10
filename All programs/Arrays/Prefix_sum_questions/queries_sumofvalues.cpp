//Given an array of integers of size n.Answer q queries where you need to print the sum of values in a given range of indices from l to r(both included).
//Note: the values of l and r in queries follow 1-based indexing.

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n+1,0);// due to 1 based indexing
    // 0 based indexing -> 0 ..... n-1
    //1 based indexing -> 1 ...... n
    for(int i=1; i<=n;i++){
        cin>>v[i];
    }

    //calculate prefix sum array
    for(int i=1; i<=n; i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

    int ans=0;
    //ans= prefixsumarray[r]- prefixsumarray[l-1]

        ans= v[r]-v[l-1];
        cout<<ans<<endl;
    }
    
    return 0;
}

//dry run
//5 1 2 3 4 -> user input
//0 5 1 2 3 4 -> the array that gor stored after the user delclaration
// 0 5 6 8 11 15 -> prefix sum array
//l = 1, r = 3