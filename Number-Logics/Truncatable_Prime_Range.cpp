#include<iostream>
using namespace std;

bool IsPrime(long long n){
	if(n<=1) return false;
	if(n==2 || n==3) return true;
	
	if(n%2==0 || n%3==0) return false;
	
	for(int i=5; i*i<=n ; i+=6){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}

bool IsTruncatablePrime(long long n){
	if(n<10) return false;
	if(!IsPrime(n)) return false;
	long long p= n;
	while(p>0){
		if(p%10==0 || ((p%2 ==0)&&p>2) || ((p%5==0)&&p>5) || p%10==1 ){
			return false;
		}
		p/=10;
	}
	// right truncatable
	long long temp =n/10;
	while(temp>0){
		if(!IsPrime(temp)){
			return false;
		}
		temp/=10;
	}
	// left truncatable
	long long power =1;
	long long w = n;
	while(w>9){
		w/=10;	
		power *= 10;
		
	}
	long long m = n;
	while(power>0){
		if(!IsPrime(m)){
			return false;
		}		
		m%=power;
		power/=10;
	}	
	return true;
}

void PrintTruncatableRange(int start, int end){
	if(start>end) swap(start,end);
	if(end<11){
		return;
	}
	if(start<11){
		start = 11;
	}
	int count =0;
	for(int i=11; i<=end; i+=6){
		if(IsTruncatablePrime(i)){
			cout<<i<<endl;
			count++;
		}
		if(IsTruncatablePrime(i+2)){
			cout<<(i+2)<<endl;
			count++;
		}
	}
	cout<<"Total Truncatable Prime Between "<<start<<" to "<<end<<" = "<<count<<endl;
}
int main(){
	int a,b;
	cout<<"Enter Start Range = ";
	cin>>a;
	cout<<"Enter End Range = ";
	cin>>b;
	
	PrintTruncatableRange(a,b);
	
	return 0;
}
