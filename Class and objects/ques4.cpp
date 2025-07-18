#include <iostream>
using namespace std;

int main() {
    double length, width, area;
    cout << "Enter the length and width of the rectangle (separated by a space): ";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is: " << area << " square units." << endl;

    return 0;
}
