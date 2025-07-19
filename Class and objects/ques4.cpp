#include <iostream>
using namespace std;

class Car {
  private:
    string brand;
    int year;

  public:
    Car(string b, int y) {
      brand = b;
      year = y;
    }

    void displayInfo() {
      cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
  Car myCar("Toyota", 2020);
  myCar.displayInfo();
  return 0;
}
