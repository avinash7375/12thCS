#include <iostream>

using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        double area = 3.14159 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }

    void circum() {
        double circumference = 2 * 3.14159 * radius;
        cout << "Circumference of the circle: " << circumference << endl;
    }
};

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);  // Create a Circle object with the given radius

    circle.area();  // Call the area function to calculate and print the area
    circle.circum();  // Call the circum function to calculate and print the circumference

    return 0;
}

