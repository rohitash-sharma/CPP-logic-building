#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter Swastik Range = ";
	cin>>n;
	int mid = (n+1)/2;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			// anyone condition is true in these conditions then print *
			if(i==mid || j==mid || (i==1 && j>mid) || (j==1 && i<mid) || (i==n && j<mid) || (j==n && i>mid)){
				cout<<"* ";
			}
			// if not find anyone condition is true then print space
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
