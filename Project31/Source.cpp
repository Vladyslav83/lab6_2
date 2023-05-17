#include <iostream>
#include <cmath>

using namespace std;

// Abstract base class Quadrilateral
class Quadrilateral {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

// Derived class Square
class Square : public Quadrilateral {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() {
        return side * side;
    }
    double perimeter() {
        return 4 * side;
    }
};

// Derived class Rectangle
class Rectangle : public Quadrilateral {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() {
        return length * width;
    }
    double perimeter() {
        return 2 * (length + width);
    }
};

// Derived class Parallelogram
class Parallelogram : public Quadrilateral {
private:
    double base, height, side;
public:
    Parallelogram(double b, double h, double s) : base(b), height(h), side(s) {}
    double area() {
        return base * height;
    }
    double perimeter() {
        return 2 * (base + side);
    }
};

// Derived class Trapezoid
class Trapezoid : public Quadrilateral {
private:
    double base1, base2, height, side1, side2;
public:
    Trapezoid(double b1, double b2, double h, double s1, double s2) : base1(b1), base2(b2), height(h), side1(s1), side2(s2) {}
    double area() {
        return ((base1 + base2) / 2) * height;
    }
    double perimeter() {
        return base1 + base2 + side1 + side2;
    }
};

int main() {
    // create objects of derived classes and call their area() and perimeter() functions
    Square sq(5);
    cout << "Square: area = " << sq.area() << ", perimeter = " << sq.perimeter() << endl;

    Rectangle rect(4, 6);
    cout << "Rectangle: area = " << rect.area() << ", perimeter = " << rect.perimeter() << endl;

    Parallelogram para(8, 5, 7);
    cout << "Parallelogram: area = " << para.area() << ", perimeter = " << para.perimeter() << endl;

    Trapezoid trap(6, 10, 8, 4, 5);
    cout << "Trapezoid: area = " << trap.area() << ", perimeter = " << trap.perimeter() << endl;

    return 0;
}
