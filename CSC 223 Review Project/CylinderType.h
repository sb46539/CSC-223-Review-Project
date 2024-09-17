#pragma once
#include "CircleType.h"

template <class T>
class CylinderType : public CircleType<T>

{
public:
    CylinderType(); // DEFAULT CONSTRUCTOR
    CylinderType(T, T, T, T, T); // CONSTRUCTOR W PARAMS
    CylinderType(PointType<T>, PointType<T>, T);

    void setHeight(T); // SETS HEIGHT VALUE
    T getHeight(); // RETURNS HEIGHT VALUE

    double calcSurfaceArea(); // RETURNS THE SURFACE AREA OF CYLINDER
    double calcVolume(); // RETURNS VOLUME OF CYLINDER

    void print(); // PRINTS CYLINDER PROPERTIES (RADIUS, AREA, CIRC OF BASE) + SURFACE AREA AND VOLUME OF CYLINDER

private:
    T height;
};
// IMPLEMENTATION
template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) { }

template <class T>
CylinderType<T>::CylinderType(T xCenter, T yCenter, T xBase, T yBase, T h) : CircleType<T>(xCenter, yCenter, xBase, yBase), height(h) { }

template <class T>
CylinderType<T>::CylinderType(PointType<T> center, PointType<T> base, T h) : CircleType<T>(center, base), height(h) { }

template <class T>
void CylinderType<T>::setHeight(T h)
{
    height = h;
}
template <class T>
T CylinderType<T>::getHeight()
{
    return height;
}

template <class T>
double CylinderType<T>::calcSurfaceArea()
{
    double s = this->calcCircumference() * height + 2 * this->calcArea();
    return s;
}

template <class T>
double CylinderType<T>::calcVolume()
{
    double v = height * this->calcArea();
    return v;
}

template <class T>
void CylinderType<T>::print()
{
    CircleType<T>::print();
    cout << "Surface Area: " << calcSurfaceArea() << endl;
    cout << "Volume: " << calcVolume() << endl;
}