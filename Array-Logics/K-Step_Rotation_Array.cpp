#include <iostream>
#include <algorithm>
using namespace std;

void PrintArray(const int arr[], int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void RotateRight(int arr[], int size, int k) {
    if (size <= 1) return;
    
    k = k % size;
    
    if (k == 0) return;

    int left = 0;
    int right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    for (int i = 0; i < k / 2; i++) {
        swap(arr[i], arr[k - 1 - i]);
    }
    
    left = k;
    right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int array[] = {3, 5, 7, 9, 11, 13, 15, 20, 21, 50};
    
    int size = sizeof(array) / sizeof(array[0]);
    int k = 5; 
    
    cout << "Original Array: ";
    PrintArray(array, size);

    RotateRight(array, size, k);

    cout << "Rotate Right: ";
    PrintArray(array, size);

    return 0;
}
