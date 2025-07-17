#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double grade;

    cout << "Enter the student's name, age, and grade (separated by spaces): ";
    getline(cin, name);
    cin >> age >> grade;

    cout << "Student's Name: " << name << endl;
    cout << "Student's Age: " << age << " years" << endl;
    cout << "Student's Grade: " << grade << endl;

    return 0;
}
