#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout << "a: " << a <<endl<< "b: " << b << endl;
    cin >> a >> b;

    int c;
    c=a;
    a=b;
    b=c;

    cout << "Value of a:"<<a<< endl;
    cout << "Value of b:"<<b<< endl;

    return 0;

}