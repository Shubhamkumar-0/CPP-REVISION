/** 🔷 1. Reading and Writing Data using cin and cout
🔸Theory:
 cin: Standard input (keyboard se input lene ke liye).
 cout: Standard output (screen par output dikhane ke liye).
 Both are defined in the iostream header and belong to the std namespace.
🔸Code with Comments:
**/

#include <iostream> // Required for cin and cout
using namespace std;

int main() {
    int age;

    cout << "Enter your age: "; // Ask user for input
    cin >> age; // Take input from user and store in variable age

    cout << "You are " << age << " years old." << endl; // Display output
    return 0;
}