#include<iostream>
using namespace std;
int main(){
    int n,arr[1000],count=0,i;
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter the array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"display the array elements"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }   
   cout<<endl;
   //finding majority element in an array by brute force
   for( i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        count++;
    }
    else{
        count=0;
    }
}}
if(count>n/2){
    cout<<arr[i]<<" ";} 
   return 0;}