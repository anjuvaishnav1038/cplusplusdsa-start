#include<iostream>
#include<vector>
using namespace std;
int main(){
    //union of two array which donot consist of duplicate elements.
    int arr1[500];
    int arr2[500];
    vector<int>v;
    int n;
    cout<<"enter the the size of an array arrays";
    cin>>n;
    cout<<"enter the element of an array arr1";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the elements of the arr2";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<"display the arr1"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
        v.push_back(arr1[i]);
    }
    cout<<endl;
    cout<<"display the arr2"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
        v.push_back(arr2[i]);
    }
    cout<<endl;
    cout<<"union of two array"<<endl;
    for(int i=0;i<2*n;i++){
    cout<<v[i]<<" ";}
    return 0;
}