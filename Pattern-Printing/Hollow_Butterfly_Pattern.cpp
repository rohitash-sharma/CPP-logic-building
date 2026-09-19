#include <iostream>
using namespace std;
int main( ){
	int n;
	cout<<"Enter an odd number = ";
	cin>>n;
	int mid = (n+1)/2;
	for(int i =1; i<=n; i++){
		for(int j=1; j<=n+1; j++){
			if(j==1 || j==(n+1) || ((i+j==n+2) && (i<=mid)) || ((i+j ==n+1) && (i>=mid)) || ((i==j) && (i<=mid)) || ((i==j-1) && (i>=mid))){
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
