#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, circleArea, circleCircumference;
    double base, height, triangleArea;

    cout << "Enter the radius of the circle, base of the triangle, and height of the triangle (separated by spaces): ";
    cin >> radius >> base >> height;

    circleArea = M_PI * radius * radius;
    circleCircumference = 2 * M_PI * radius;
    triangleArea = 0.5 * base * height;

    cout << "Circle Area: " << circleArea << " units^2" << endl;
    cout << "Circle Circumference: " << circleCircumference << " units" << endl;
    cout << "Triangle Area: " << triangleArea << " units^2" << endl;

    return 0;
}
