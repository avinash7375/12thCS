#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x) {
   for (int i = 0; i < n; i++) {
       if (arr[i] == x) {
           return i;  // Element found at index i
       }
   }
   return -1;  // Element not found
}

int main() {
   int arr[] = {2, 3, 4, 10, 40};
   int x = 10;  // Element to search
   int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

   int result = linearSearch(arr, n, x);

   if (result == -1) {
       cout << "Element not found in the array." << endl;
   } else {
       cout << "Element found at index " << result << endl;
   }

   return 0;
}