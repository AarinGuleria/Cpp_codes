//print all the value btw 1-50 except for multiple of 3.

#include<iostream>
using namespace std;
int main()
{
   for(int i = 1; i <= 50; i++){
    if(i%3==0){
        continue;
    }
    cout<<i<<endl;
   }
   return 0;
}
