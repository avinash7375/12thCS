#include <iostream>

using namespace std;

void fact(int n) {
   int factorial = 1;  // Initialize factorial to 1

   if (n < 0) {
       cout << "Factorial is not defined for negative numbers." << endl;
   } else {
       for (int i = 1; i <= n; ++i) {
           factorial *= i;  // Multiply factorial by each number from 1 to n
       }
       cout << "Factorial of " << n << " is " << factorial << endl;
   }
}

int main() {
   int num;
   cout << "Enter a non-negative number to find it's factorial : ";
   cin >> num;

   fact(num);  // Call the fact function to calculate factorial

   return 0;
}