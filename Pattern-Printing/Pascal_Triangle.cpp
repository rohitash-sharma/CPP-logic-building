#include <iostream>
using namespace std;
int main( ){
	int n;
	cout<<"Enter num = ";
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<"  ";
		}
		int val = 1;
		for(int k=1; k<=i; k++){
			cout<<val<<"   ";
			val = val*(i-k)/k;
		}
		cout<<endl;
	}
	return 0;
}
