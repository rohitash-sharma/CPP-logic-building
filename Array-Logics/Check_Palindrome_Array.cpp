#include <iostream>
using namespace std;

bool IsPalindrome(int arr[], int size){
	int left = 0;
	int right = size - 1;
	
	while(left < right){
		if(arr[left] != arr[right]){
			return false;
		}
		left++;
		right--;
	}
	return true;
}

void ProcessArray(int array[], int size){
	
	if(IsPalindrome(array,size)){
		cout<<"This is a Palindrome Array"<<endl;
	}
	else{
		cout<<"This is not a Palindrome Array"<<endl;
	}
}

int main(){
	int array[] = {1,2,3,2,1};
	int size = sizeof(array)/sizeof(array[0]);
	
	ProcessArray(array,size);
	
	return 0;
}
