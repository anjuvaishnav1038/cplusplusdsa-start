#include<iostream>
using namespace std;
int main(){
    int n,i;
    int p=1;
    cout<<"enter the value of n";
    cin>>n;
    for( i=n;i>=1;i--){
        p=p*i;
    }
    cout<<p;
    return 0;

}