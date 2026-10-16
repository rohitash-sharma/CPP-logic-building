#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"This Function prints Opposite Triangle"<<endl;
	cout<<"Enter Triangle Length: ";
	cin>>n;
	for(int i = 1 ; i <= n ; i++){
		for(int k = 1 ; k <= i ;k++){
			cout<<" ";
		}
		for(int j = i ; j <= n ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
