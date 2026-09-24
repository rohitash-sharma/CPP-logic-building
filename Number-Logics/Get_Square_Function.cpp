#include <iostream>
using namespace std;

long long getsquare(long long a){	
	return a*a;
}

int main( ){
	long long n;
	cout<<"This is Square Function"<<endl;
	cout<<"Enter a num = ";
	cin>>n;
	cout<<getsquare(n)<<endl;
	
	return 0;
}
