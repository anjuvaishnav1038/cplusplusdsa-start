#include<iostream>
using namespace std;
int main(){
    int n,i;
    int arr[1000];
    cout<<"enter the size of the array elements";
    cin>>n;
    cout<<"enter the array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Display array elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //left rotate an array by 1
    int value=arr[0]; 
    for(i=0;i<n;i++){
      arr[i]=arr[i+1];
    }
    arr[n-1]=value;
    cout<<"array after left rotation by 1"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;}