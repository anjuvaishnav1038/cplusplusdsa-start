#include<iostream>
#include<math.h>
using namespace std;
//converting decimal nunmber to binary equivalent
int main(){
int number,ans=0,i=0,bit=0;
cout<<"enter the number";
cin>>number;
//bitwise method
/* 1.obtain bit with bitwise and operaton
 2. right shift number by 1(number>>1)
 3.repeat abobe steps till number not equal to 0;
 4. teverse the bits so obtained
*/
while(number!=0){
   bit=number&1;
   ans=bit*pow(10,i)+ans;
   i++;
   number=number>>1;
}
cout<<ans;
return 0;
}