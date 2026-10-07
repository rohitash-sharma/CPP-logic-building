#include<iostream>
using namespace std;

// Create a specific function for searching
// Isko array, array ka size, aur target number diya.
int LinearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; 
        }
    }
    // Agar pura loop ghumne ke baad bhi return nahi hua, iska matlab number nahi mila.
    return -1; 
}

int main() {
    int array[] = {373, 37, 38, 58, 26, 48, 60};
    
    // 'const' for variables that shouldn't change
    const int Key = 58; 
    const int size = sizeof(array) / sizeof(array[0]);
    
    // Call the Function
    int resultIndex = LinearSearch(array, size, Key);
    
    if(resultIndex != -1) {
        cout << "Success: Element " << Key << " found at index [" << resultIndex << "]" << endl;
    } else {
        cout << "Error: Element not found in the array." << endl;
    }
    
    return 0;
}
