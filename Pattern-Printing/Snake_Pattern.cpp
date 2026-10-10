#include <iostream>
using namespace std;
int main( ){
	int n;
	cout<<"enter n = ";
	cin>>n;
	int count =1;
	for(int i=1; i<=n ; i++){
		if(i%2!=0){
			for(int j=1 ; j<=n ;j++){
				cout<<count<<" ";
				count++;
			}
		}
		else{
			int temp = count+n-1;
			for(int j =1; j <= n ; j++){
				cout<<temp<<" ";
				temp--;
			}
			count = count +n;	
		}
		cout<<endl;
	}
	return 0;
}
				
