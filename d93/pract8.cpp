#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    char charToCount = 'a';
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char c : text) {
        if (tolower(c) == tolower(charToCount)) {
            count++;
        }
    }

    cout << "The number of occurrences of '" << charToCount << "' in the text is: " << count << endl;

    return 0;
}
