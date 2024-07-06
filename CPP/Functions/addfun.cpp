#include<iostream>
using namespace std;

int add(int n1, int n2){
    int sum=(n1+n2);
    return sum;
}

int add(int n1,int n2,int n3){
    int sum=(n1+n2+n3);
    return sum;
}

float add(float n1,float n2){
    float sum=(n1+n2);
    return sum;
}

int main()
{
   int a=2;
   int b=4;

   float c=3.4;
   float d=4.6;

   cout<<add(a,b)<<endl;

   
   return 0;
}