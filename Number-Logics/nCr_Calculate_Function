#include<iostream>
using namespace std;

// this function gives factorial value of a
int getfactorial(int a){
	int factorial =1;
	for(int i=a; i>=1; i--){
		factorial *=i;
	}
	return factorial;
}

// this function gives nCr value
int getnCr(int n, int r){
	// if r>n then swap r and n
	if(r>n) swap(r,n);
	// called getfactorial function nCr = n!/(r!*(n-r)!)
	int nCr = getfactorial(n)/(getfactorial(r)*getfactorial(n-r));
	
	return nCr;
}

int main(){
	int num;
	cout<<"Enter n = ";
	cin>>num;
	int s;
	cout<<"Enter r = ";
	cin>>s;
	cout<<getnCr(num,s)<<endl;
	
	return 0;
}
