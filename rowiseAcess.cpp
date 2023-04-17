#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
	int row,col;
	cout<<"Enter the number of rows in an array";
	cin>>row;
	cout<<"enter the number of columns in an array";
	cin>>col;
	cout<<"Enter the matrix elemnts";
	for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
    //rowwise acess in an array
	cout<<"Display the 2D array"<<endl;
	for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
        cout<<endl;
	}
	return 0;
}