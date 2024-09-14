#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <class T> // template class; generic class
class PointType
{
private:
    T x;
    T y;

public:
    PointType() : x(0), y(0) { } // default constructor

    PointType(T Ux, T Uy) : x(Ux), y(Uy) {
        cout << fixed << setprecision(1) << showpoint;
    } // constructor with parameters

    // Setters
    void setX(T Ux) { x = Ux; }
    void setY(T Uy) { y = Uy; }
    void setPoint(T Ux, T Uy) {
        x = Ux;
        y = Uy;
    }

    // Getters
    T getX() const { return x; }
    T getY() const { return y; }
    void getPoint(T& Ux, T& Uy) const {
        Ux = x;
        Uy = y;
    }

    // Distance operator
    double operator-(const PointType<T>& op2) const {
        return sqrt(pow(x - op2.x, 2) + pow(y - op2.y, 2));
    }

    // Print method
    void print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }



};

