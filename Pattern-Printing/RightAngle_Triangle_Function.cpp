#include<iostream>
using namespace std;

// function for print right angle triangle 
void RightAngleTriangle(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main( ){
	int num;
	cout<<"Enter Triangle Height = ";
	cin>>num;
	RightAngleTriangle(num);
	
	return 0;
}
