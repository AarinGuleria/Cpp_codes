#include<iostream>
using namespace std;

int main(){

   int num1=6;
   int num2=3;
   bool exp1=false;
   bool exp2=false;

   cout<<num1+num2<<endl; //Airthemetic operator
   cout<<num1-num2<<endl;
   cout<<num1*num2<<endl;
   cout<<num1/num2<<endl;
   cout<<num1%num2<<endl;  //modulus gives remainder

   cout<<"--------------------------------"<<endl;

   cout<<(num1==num2)<<endl;  //Relational operation
   cout<<(num1!=num2)<<endl;
   cout<<(num1>=num2)<<endl;
   cout<<(num1<=num2)<<endl;

   cout<<"--------------------------------"<<endl;

   cout<<(exp1&&exp2)<<endl;  //Logical operator  // and
   cout<<(exp1||exp2)<<endl;  //or
   cout<<(!exp1)<<endl;  //not

   cout<<"--------------------------------"<<endl;

   num1+=3;              //Assignment operator
   cout<<num1<<endl;
   num2-=2;
   cout<<num2<<endl;

   cout<<"--------------------------------"<<endl;

   int num3=5;  //Bitwise operator   //here 5=0101
   cout<<(num3<<1)<<endl;
   cout<<(num3>>1)<<endl;

   int num4=8;  //8=1000
   cout<<(num3&num4)<<endl;
   cout<<(num3|num4)<<endl; //1101=13

   cout<<"--------------------------------"<<endl;

   int a=4;  //misc operator 
   cout<<sizeof(a)<<endl;

   char name='a';
   cout<<sizeof(name)<<endl;

   bool flag;
   a==name?flag=true:flag=false;
   cout<<flag<<endl;

   cout<<(&a)<<endl;

   cout<<"--------------------------------"<<endl;

   int g=6; //post and pre increment operator
   cout<<(g++)<<endl;

   int h=5;
   cout<<(--h)<<endl;












   return 0;
}