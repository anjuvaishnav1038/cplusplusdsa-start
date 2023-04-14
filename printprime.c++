#include<iostream>
using namespace std;
bool checkPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
    cout<<"enter the value of n";
	cin>>n;
	for(int i=2;i<=n;i++){
		bool isprime=checkPrime(i);
		if(isprime){
			cout<<i<<" ";
		}
	}
return 0;
}