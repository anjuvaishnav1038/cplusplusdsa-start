#include<iostream>
#include<math.h>
using namespace std;
int main(){
    /* question : Set the kth bit of the number
     step 1:input number and convert it to that number into binary
     step 2:left shift the kth bit by k and store this number to another number (ans=1<<k)
     step 3:then take the or with number (ans|number)
     step 4: print the result.
     */
    int number,ans=0,k,i=0;
    cout<<"enter the number";
    cin>>number;
    cout<<"enter the value of k";
    cin>>k;
    while(number!=0){
        int bit=number&1;
        ans=bit*pow(10,i++)+ans;
        number=number>>1;
    }
    cout<<ans<<endl;
    //now start procedure for setting the bits
    int b=1<<k;
    int finalAns=(ans|b);
    cout<<"The final answer is"<<" "<<finalAns;
    return 0;
}