#include<iostream>
using namespace std;

// ye func perfect num ko check karega
bool IsPerfect(int num){
	if(num<=0) return false;
	int OriginalNum = num;
	int sum = 0;
	for(int i=1; i*i<=num; i++){
		if(num%i ==0){
			sum += i;
			if(i*i != num && (num/i != num)){
				sum += num/i;
			}
		}
	}
	return (sum== OriginalNum);
}

//ye func perfect num ki range print karega
void PrintPerfectNumInRange(int start, int end){
	if(start>end) swap(start,end);
	if(end<1){
		return;
	}
	if(start<1){
		start=1;
	}
	int count = 0;
	for(int i= start; i<=end; i++){
		if(IsPerfect(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total perfect number between "<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter start Range = ";
	cin>>p;
	cout<<"Enter end Range = ";
	cin>>q;
	
	PrintPerfectNumInRange(p,q);
	
	return 0;
}
