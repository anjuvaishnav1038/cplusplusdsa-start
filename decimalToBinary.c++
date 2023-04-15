#include<iostream>
#include<math.h>
using namespace std;
//we are finding binary equivalent by division method from decimal number
int main(){
    int n,r,ans=0,i=0;
    cout<<"enter the number";
    cin>>n;
   while(n!=0){
    r=n%2;
    //for stroing r in reverse
    ans=r*pow(10,i)+ans;
    i++;
    n=n/2;
   }
   cout<<ans;
   return 0;
}