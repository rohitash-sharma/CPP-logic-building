#include <iostream>
using namespace std;

long long getsquare(long long n){
	return n*n;
}

int main( ){
	long long n;
	cout<<"This Function get square according your input"<<endl;
	cout<<"Enter a num = ";
	cin>>n;
	cout<<getsquare(n)<<endl;
	
	return 0;
}
