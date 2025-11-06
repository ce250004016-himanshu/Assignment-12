#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;
public:
    Box() : length(1), breadth(1), height(1) {}
    Box(double l) : length(l), breadth(l), height(l) {}
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}
    double volume() const {
        return length * breadth * height;
    }
    void display() const {
        cout << "Length: " << length << ", Breadth: " << breadth
             << ", Height: " << height << ", Volume: " << volume() << '\n';
    }
};

int main() {
    Box b1;
    Box b2(4.0);
    Box b3(2.0, 3.0, 5.0);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
