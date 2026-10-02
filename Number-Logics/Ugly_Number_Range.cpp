#include<iostream>
using namespace std;

bool IsUgly(int n){
	if(n<=0) return false;
	
	while(n%2==0){
		n/=2;
	}
	while(n%3==0){
		n/=3;
	}
	while(n%5==0){
		n/=5;
	}
	
	return(n==1);
}

void PrintUglyRange(int start, int end){
	if(start>end) swap(start,end);
	
	int count =0;
	for(int i=start; i<=end; i++){
		if(IsUgly(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total ugly num between"<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter Start Range = ";
	cin>>p;
	cout<<" Enter End Range = ";
	cin>>q;
	
	PrintUglyRange(p,q);
	
	return 0;
}
