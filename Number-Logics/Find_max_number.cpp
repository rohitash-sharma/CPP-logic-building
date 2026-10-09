#include <iostream>
using namespace std;

int FindMaxNumber(int a, int b){
	if(a>b){
		return a;
	}
	else if(a<b){
	return b;
	}
	else{
	return a;
	}
}

int main(){
	int m,n;
	cout<<"Type Two Natural Number = ";
	cin>>m>>n;
	cout<<FindMaxNumber(m,n)<<" is the greatest number. "<<endl;
	
	
	return 0;
}
