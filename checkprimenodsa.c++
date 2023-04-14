#include<iostream>
using namespace std;
int main(){
    int n;
    int count=1;
	cout<<"enter the n";
	cin>>n;
	for(int i=2;i<=n;i++){
		if(n%i==0)
			count++;
		else
			count=1;	
	}
	if(count>2)
		cout<<"the number is non prime"<<endl;
	else
		cout<<"the number is prime"<<endl;
	return 0;
}
	
