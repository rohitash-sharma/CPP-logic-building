#include <iostream>
using namespace std;

void PrintArray(int arr[] , int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}

void ReverseArray(int arr[] , int size){
	int start = 0;
	int end = size-1;
	
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main(){
	int array[] = {10,20,30,40};
	int size = sizeof(array)/sizeof(array[0]);
	cout<<"Original Array: ";
	PrintArray(array,size);
	cout<<endl;
	ReverseArray(array,size);
	cout<<"Reversed Array: ";
	PrintArray(array,size);
	
	return 0;
}
