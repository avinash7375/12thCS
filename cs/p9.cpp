#include <iostream>
#include <string>

using namespace std;

string reverseString(string str) {
   string reversedStr = "";  // Initialize empty string to store the reversed string

   for (int i = str.length() - 1; i >= 0; i--) {
       reversedStr += str[i];  // Append characters in reverse order
   }

   return reversedStr;
}

int main() {
   string str;

   cout << "Enter a string: ";
   getline(cin, str);

   string reversed = reverseString(str);

   cout << "The reversed string is: " << reversed << endl;

   return 0;
}