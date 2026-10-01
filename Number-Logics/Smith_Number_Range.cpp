#include<iostream>
using namespace std;

int SumDigits(int n){
	int sum =0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	return sum ;
}

bool IsComposite(int n){
	if(n<=3) return false;
	if(n%2 == 0 || n%3 == 0) return true;
	
	for(int i=5; i*i<=n ; i +=6){
		if(n%i==0 || n%(i+2)==0){
			return true;
		}
	}
	return false;
}

bool IsSmith(int n){
	if(n<1) return false;
	if(!IsComposite(n)){
		return false;
	}
	int digitSum = SumDigits(n);
	int temp = n;
	int sum = 0;
	while(temp%2==0){
		sum += 2;
		temp/=2;
	}
	for(int i=3; i*i<=temp; i+=2){
		while(temp%i==0){
			sum += SumDigits(i);
			temp/=i;
		}
	}
	if(temp>1){
		sum += SumDigits(temp);
	}
	
	return(sum == digitSum);
}

void PrintSmithRange(int start, int end){
	if(start>end) swap(start,end);
	
	if(end<1){
		cout<<"Total Smith Num between"<<start<<" to "<<end<<" = "<<"0"<<endl;
		return;
	}
	if(start<1){
		start =1;
	}
	
	int count =0;
	for(int i=start; i<=end ; i++){
		if(IsSmith(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total Smith Num between"<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter Start Range = ";
	cin>>p;
	cout<<"Enter End Range = ";
	cin>>q;
	
	PrintSmithRange(p,q);
	
	return 0;
}
