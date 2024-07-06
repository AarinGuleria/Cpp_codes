#include<iostream>
using namespace std;

int main(){

    int n,first,second,third;

    n=345;

    first=n/100;
    n=n%100;

    second=n/10;
    third=n%10;

    cout<<"Sum of digits of 3-digit number is "<<(first+second+third)<<endl;

    return 0;

}