#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] == target)
            return mid;
            
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    
    cout << "Enter number to search (1-10): ";
    int target;
    cin >> target;
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1)
        cout << "Found at position " << result << endl;
    else
        cout << "Not found" << endl;
        
    return 0;
}
