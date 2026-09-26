#include<iostream>
using namespace std;

bool IsPrime(int n){
	if(n<=1) return false;
	if(n==2 || n==3) return true;
	
	if(n%2==0 || n%3==0) return false;
	
	for(int i=5; i*i<=n ; i+=6){
		if(n%i==0 || n%(i+2) == 0){
			return false;
		}
	}
	return true;
}

void PrintGoldbachPairs(int n){
	if(n<4 || n%2 != 0) return;
	int count = 0;	
	if(n == 4){
		cout<<"(2,2)";
		count++;
	}
	if(IsPrime(n-3)){
		cout<<"(3,"<<n-3<<") ";
		count++;
	}

	
	for(int i=5 ; i<=n/2; i+=6){
		if(IsPrime(i) && IsPrime(n-i)){
			cout << "(" << i << "," << n - i << ") ";
			count++;
		}
		if((i+2)>n/2) break;
		if(IsPrime(i+2) && IsPrime(n-i-2)){
			cout << "(" << (i +2)<< "," << (n - i -2)<< ") ";
			count++;
		}
			
											
	}
	cout<<endl;
	cout<<"Total Pairs "<<n<<" ke = "<<count<<endl;
	cout<<endl;
}

void PrintGoldbachRange(int start , int end){
	if(start>end) swap(start,end);
	if(end<4){
		return;
	}
	if(start<4) start = 4;
	if(start%2 != 0){
		start = start+1;
	}
	for(int i = start; i<= end; i+=2){
		PrintGoldbachPairs(i);
	}
}

int main(){
	int p,q;
	cout<<"Enter Start Range = ";
	cin>>p;
	cout<<"Enter End Range = ";
	cin>>q;
	
	PrintGoldbachRange(p,q);
	
	return 0;
}
