#include<iostream>
using namespace std;
int main(){
	int n;
	bool ans=true;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0)
			ans=false;}
	if(ans)
		cout<<"prime"<<endl;
		else
			cout<<"not prime"<<endl;
	return 0;}
