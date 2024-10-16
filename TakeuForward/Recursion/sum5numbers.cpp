// 4 ways to do this: for loop, formula(n*(n+1)/2) , parametrised , functional



//parametrised
#include<bits/stdc++.h>
using namespace std;

void total(int n, int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }

    total(n-1,sum+n);

}

int main(){

    int n;
    cin>>n;

    total(n,0);
    return 0;
}



//functional
#include<bits/stdc++.h>
using namespace std;

int total(int n){
    if(n==0){
        return 0;
    }
    return n + total(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<total(n);
    return 0;
}