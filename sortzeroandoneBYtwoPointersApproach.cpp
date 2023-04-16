#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int arr[1000];
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"Enter the array elemnts";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"display the array elemnts"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0&&arr[j]==1){
            i++;
            j--;
        }
        if(arr[i]==1&&arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]==1&&arr[j]==1){
            j--;
        }
        if(arr[i]==0&&arr[j]==0){
            i++;
        }
    }
    cout<<"dispaly array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}