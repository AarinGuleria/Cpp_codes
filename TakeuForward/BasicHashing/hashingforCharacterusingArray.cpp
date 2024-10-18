#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int n=s.size();

    //prestoring int the hash array 
    int hash[26]={0};
    for(int i=0; i<n; i++){
        hash[s[i]- 'A']+=1;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'A']<<endl;
    }
    
    return 0;
}