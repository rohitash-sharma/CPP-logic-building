#include<iostream>
#include<cmath>
using namespace std;

bool IsAutomorphic(int n){
	if(n<0) return false;
	if(n==0) return true;
	
	int lastdigit =n%10;
	if(lastdigit !=1 && lastdigit !=5 && lastdigit !=6) return false;
	
	long long square =(long long)n*n;
	// n ko p mein store kar lete hain because aage n 0 ho jayega
	int p=n;
	
	long long divisor = 1;
	while(n>0){
		divisor *= 10;
		n/=10;
	}
	
	// n mein jitne dihit hain utne nikalane ke liye ye formula lagaya hai
	long long a = square%divisor;
	return (a==p);
}

void PrintAutomorphicInRange(int start, int end){
	if(start>end) swap(start,end);
	
	int count =0;
	for(int i=start; i<=end; i++){
		if(IsAutomorphic(i)){
			cout<<i<<endl;
			count++;
		}
	}
	cout<<"Total Automorphic number "<<start<<" to "<<end<<" = "<<count<<endl;
}

int main(){
	int p,q;
	cout<<"Enter start Range = ";
	cin>>p;
	cout<<"Enter end Range = ";
	cin>>q;
	
	PrintAutomorphicInRange(p,q);
	
	return 0;
}
