#include<iostream>
using namespace std;
int main()
{
   int n,sum=0,i=1;
   cin>>n;

   while(i<=n){
    sum+=i;
    i++;
   }

   cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
   return 0;
}

