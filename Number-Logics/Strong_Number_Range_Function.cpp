#include<iostream>
using namespace std;

// first func number ka factorial nikalega
int CalculateFactorial(int num){
	int factorial =1;
	for(int i=1; i<=num; i++){
		factorial *= i;
	}
	return factorial;
}

// second func check karega ki number strong numbrt hai ya nahin
bool IsStrongNumber(int num){
	
	if(num<=0) return false;
	
	int OriginalNum = num;
	int sum = 0;
	while(num>0){
		int lastdigit = num%10;
		sum += CalculateFactorial(lastdigit);
		num/=10;
	}
	return(sum==OriginalNum);
}

//third func range mein kitne number stong hai ye priny karega
void PrintStrongNumberInRange(int start ,int end){
	if(start>end) swap(start,end);
	
	if(end<1){
		return;
	}
	int p=start;
	if(p<1){
		p=1;
	}
	int count =0;
	for(int i=p; i<=end; i++){
		if(IsStrongNumber(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total Strong Number between "<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter Range Start = ";
	cin>>p;
	cout<<"Enter Range end = ";
	cin>>q;
	
	PrintStrongNumberInRange(p,q);
	
	return 0;
}
