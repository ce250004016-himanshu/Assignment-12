#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle() : length(1.0), breadth(1.0) {}
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double area() const {
        return length * breadth;
    }

    void display() const {
        cout << "Rectangle: length = " << length
             << ", breadth = " << breadth
             << ", area = " << area() << '\n';
    }
};

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r) : real(r), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    void display() const {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i";
        else cout << " - " << -imag << "i";
        cout << '\n';
    }
};

int main() {
    cout << "---- Rectangle Demo ----\n";
    Rectangle r1;
    r1.display();
    Rectangle r2(5.5, 3.2);
    r2.display();

    cout << "\n---- Complex Demo ----\n";
    Complex c1;
    cout << "c1 (default): ";
    c1.display();
    Complex c2(4.0);
    cout << "c2 (real only): ";
    c2.display();
    Complex c3(3.0, -2.5);
    cout << "c3 (real and imag): ";
    c3.display();

    return 0;
}
