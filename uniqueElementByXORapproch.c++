#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    int ans=0;
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"display the array elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"finding unique element"<<endl;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    return 0;
}