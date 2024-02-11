#include <iostream>

void swap(int& x, int& y) {
   // Swap the values of x and y using a temporary variable
   int temp = x;
   x = y;
   y = temp;
}

int main() {
   int a = 10, b = 20;

   std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

   // Call the swap function to exchange the values of a and b
   swap(a, b);

   std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

   return 0;
}
