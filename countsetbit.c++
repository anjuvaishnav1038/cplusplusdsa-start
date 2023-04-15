#include<iostream>
using namespace std;
int main(){
	int number,count=0;
	cout<<"enter the value number";
	cin>>number;
	while(number!=0){
	if(number&1){
	count++;}
    number=number>>1;	}
	cout<<"number of set bits are"<<count;
	return 0;
	
}