#include<iostream>
using namespace std;

int SumOfSquareOfDigits(int n){
	int sum =0;
	while (n>0){
		int lastdigit = n%10;
		sum += (lastdigit * lastdigit);
		n/=10;
	}
	return sum;
}

bool IsHappyNumber(int m){
	if(m<1) return false;

	int slow = m;
	int fast = m;
	
	do{
		slow = SumOfSquareOfDigits(slow);
		fast = SumOfSquareOfDigits( SumOfSquareOfDigits(fast));
		if(fast==1){
			return true;
		}
	}
	while(slow != fast);
	
	return false;	
}

void PrintHappyNumInRange(int start, int end){
	if(start>end) swap(start,end);
	
	int count =0;
	for(int i= start; i<=end; i++){
		if(IsHappyNumber(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total Happy Number between"<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter Start Range = ";
	cin>>p;
	cout<<"Enter End Range = ";
	cin>>q;
	
	PrintHappyNumInRange(p,q);
	
	return 0;
}
