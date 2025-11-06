#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    double price;
public:
    Car(string b, double p) : brand(b), price(p) {}
    void display() const {
        cout << "Brand: " << brand << ", Price: " << price << '\n';
    }
};

int main() {
    Car car1("Maruti", 550000);
    Car car2("Hyundai", 750000);
    car1.display();
    car2.display();
    return 0;
}
