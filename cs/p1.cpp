#include <iostream>

using namespace std;

int main(void) {
int x = 12, y = 10;

cout << "Before swapping " << x << " " << y << endl;


int temp = x;
x = y;
y = temp;


cout << "After Swapping " << x << " " << y << endl;

}