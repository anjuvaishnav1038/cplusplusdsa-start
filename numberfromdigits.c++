#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arr[1000];
    cout<<"enter the digits"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    ans=ans*10+arr[i];

    }
    cout<<ans;
    return 0;

}