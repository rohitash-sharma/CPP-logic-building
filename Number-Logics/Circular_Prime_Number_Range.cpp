#include<iostream>
using namespace std;

bool IsPrime(int n){
	if(n<=1) return false;
	
	if(n==2 || n==3) return true;
	if(n%2==0 || n%3==0) return false;
	
	for(int i=5; i*i<=n; i+=6){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}


bool IsCircularPrime(int a){
	if(!IsPrime(a)){
		return false;
	}
	if(a<10){
		return true;
	}
	int temp = a;
	int digitcount = 0;
	while(temp>0){
		int lastdigit = temp%10;
		if(lastdigit == 0 || lastdigit == 2 || lastdigit == 4 || lastdigit == 5 || lastdigit == 6 || lastdigit == 8 ){
			return false;
			}
		digitcount++;
		temp/=10;			
	}
	
	int p =1;
	for(int i = 1; i<digitcount ; i++){
		p*=10;
	}
	for(int i=1; i<digitcount ; i++){
		int last = a % 10;
		a/=10;
		a = (last*p)+a;
		if(!IsPrime(a)){
			return false;
		}
	}
	return true;
}

void PrintCircularPrimeRange(int start, int end){
	if(start>end) swap(start,end);
	if(end<1){
		return;
		}	
	int p = start;
	if(p<1) p = 1;

	int count = 0;
	for(int i = p ; i<= end ; i++){
		if(IsCircularPrime(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total Circular Prime Number Between "<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Entet Start Range = ";
	cin>>p;
	cout<<"Enter End Range = ";
	cin>>q;
	
	PrintCircularPrimeRange(p,q);
	cout<<"!! if you like this function then rating me !!"<<endl;
	return 0;
}
