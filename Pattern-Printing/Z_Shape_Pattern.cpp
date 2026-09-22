#include <iostream>
using namespace std;
int main( ){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n ; j++){
			if(i==1 || i==n || (i+j==n+1)){
				cout<<"* ";
				//i may use also for(int j=n;j>=1;j--){
					//if(i==1 || i==n || (i==j))
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
