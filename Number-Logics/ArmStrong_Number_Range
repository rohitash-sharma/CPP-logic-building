#include<iostream>
using namespace std;

//first func jo diginy count karega
int IsDigits(int num){
	int count = 0;
	while(num>0){
		count++;
		num/=10;
	}
	return count;
}

// second func jo power calculate karega
int CalculatePower(int base,int exponent){
	int result =1;
	for(int i=1; i<=exponent; i++){
		result *= base;
	}
	return result;
}

// third func ye check karega ki num armstrong hai ya nahin
bool IsArmstrong(int num){
	if(num<0) return false;
	if(num==0) return true;
	
	int OriginalNum = num;
	int digits = IsDigits(num);
	int sum = 0;
	
	while(num>0){
		int lastdigit = num%10;
		sum += CalculatePower(lastdigit,digits);
		num/=10;
	}
	
	return(sum==OriginalNum);
}

// fourth fumc range print karega ki range mein kitne armstrong num hain
void PrintArmstrongRange(int start,int end){
	if(start>end) swap(start,end);
	
	int count =0;
	cout<<"Armstrong number between "<< start <<" and "<< end <<" : " <<endl;
	
	for(int i = start ; i<=end ; i++){
		if(IsArmstrong(i)){
			cout<<i<<"\n";
			count++;
		}
	}
	cout<<"\n Total Armstrong number found : " << count <<endl;
}

int main(){
	int p,q;
	cout<<"Enter start Range = ";
	cin>>p;
	cout<<"Enter end Range = ";
	cin>>q;
	
	PrintArmstrongRange(p,q);
	
	return 0;
}
