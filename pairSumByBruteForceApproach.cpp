#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,t;
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target value";
    cin>>t;
    //pair sum by brute force
    for(int i=0;i<n;i++){
        int element=arr[i];
        for(int j=i+1;j<n;j++){
            if(element+arr[j]==t){
                cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    return 0;
}