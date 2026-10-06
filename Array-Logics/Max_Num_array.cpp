#include <iostream>
using namespace std;

int main()
{
	int array[] = {2,3,19,11,18};
	int max = array[0];
	int size = sizeof (array)/sizeof (array[0]);
	for(int i = 1; i<size ; i++)
	{
		if(array[i] > max){
			max = array[i];
		}
	}
	cout<<"Max Num : "<<max<<endl;
	return 0;
}
