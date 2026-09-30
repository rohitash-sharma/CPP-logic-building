#include<iostream>
using namespace std;

int CountDigit(long long n){
	long long count=0;
	while(n>0){
		n/=10;
		count++;
	}
	return count++;
}

bool IsKaprekar(long long n){
	long long square =n*n;
	long long digit = CountDigit(n);
	long long num =1;
	for(long long i=1; i<=digit; i++){
		num *= 10;
	}
	long long w = square%num;
	square/=num;
	
	return( square + w == n);
	
}

void PrintKaprekarRange(int start,int end){
	if(start>end) swap(start,end);
	
	int count =0;
	for(int i=start ; i<=end ; i++){
		if(IsKaprekar(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total Kaprekar number between"<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter Start Range = ";
	cin>>p;
	cout<<"Enter End Range = ";
	cin>>q;
	
	PrintKaprekarRange(p,q);
	
	return 0;
}
