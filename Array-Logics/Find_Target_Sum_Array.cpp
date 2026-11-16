#include <iostream>
using namespace std;

void FindTwoSum(const int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;

    while (left < right) 
    {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target) 
        {
            cout << arr[left] << "+" << arr[right]<<" = "<<target << endl;
           
            return;
        }
        else if (currentSum > target) 
        {
            right--;
        }
        else if (currentSum < target) 
        {
            left++;
        }
    }
    cout << "No pair found" << endl;
}

int main() 
{
     int array[] = {2, 7, 11, 15, 27};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 22;

    FindTwoSum(array, size, target);
    
    return 0;
}
