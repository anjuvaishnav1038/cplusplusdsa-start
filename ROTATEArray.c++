//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
   void reverse(int * arr, int d, int n){
        int i = d;
        int j = n; 
        
        while(i < j){
            swap(arr[i++],arr[j--]);
        }
    }
  
    void rotateArr(int arr[], int d, int n){
        
        
            d = d % n; 
            /*
            2,4,6 |,8,10,12,14,16,18,20
            
            6 4 2 | 20 18 16 14 12 10 8
            
            8 10 12 14 16 18 20 2 4 6
            
            
            */
           
            reverse(arr,0,d-1);
            reverse(arr,d, n -1);
            reverse(arr,0, n - 1);
            
    }
};

