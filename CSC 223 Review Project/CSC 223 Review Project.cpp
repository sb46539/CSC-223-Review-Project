// CSC 223 Review Project.cpp : This file contains the code for the Review which will be on tree branches, PointType Class, CircleType Class, CylinderType class
//

#include <iostream>
#include "CylinderType.h"

using namespace std;

int main()
{
    cout << "Test CylinderType with integers" << endl;

    cout << "Default constructor (Cylinder1):\n";
    CylinderType<int> Cylinder1;
    cout << "Center Point:";
    Cylinder1.printCenterPoint();
    cout << "Circumference Point:";
    Cylinder1.printCircumPoint();
    cout << "Height:" << Cylinder1.getHeight();
    cout << endl;

    cout << "Constructor with coordinates (Cylinder2):\n";
    CylinderType<int> Cylinder2(5, 3, -4, 0, 8);
    cout << "Center Point:";
    Cylinder2.printCenterPoint();
    cout << "Circumference Point:";
    Cylinder2.printCircumPoint();
    cout << "Height:" << Cylinder2.getHeight();
    cout << endl;

    cout << "Test setCenterPoint, setCircumPoint, and setHeight with Cylinder1:";
    Cylinder1.setCenterPoint(5, 3);
    Cylinder1.setCircumPoint(0, 3);
    Cylinder1.setHeight(4);

    cout << "Center Point:";
    Cylinder1.printCenterPoint();
    cout << "Circumference Point:";
    Cylinder2.printCircumPoint();
    cout << "Height:" << Cylinder2.getHeight();
    cout << endl;

    cout << "Testing the print function for Cylinder2:" << endl;
    Cylinder2.print();
    cout << endl;

    cout << endl << "Test CircleType with real numbers:" << endl;

    cout << "Default constructor (Cylinder4):\n";
    CylinderType<double> Cylinder4;
    cout << "Center Point:";
    Cylinder4.printCenterPoint();
    cout << "Circumference Point:";
    Cylinder4.printCircumPoint();
    cout << "Height:" << Cylinder4.getHeight();
    cout << endl;

    cout << "Constructor with coordinates (Cylinder5):\n";
    CylinderType<double> Cylinder5(5.2, 3.3, -4.6, 0, 3.7);
    cout << "Center Point:";
    Cylinder5.printCenterPoint();
    cout << "Circumference Point:";
    Cylinder5.printCircumPoint();
    cout << "Height:" << Cylinder5.getHeight();
    cout << endl;

    cout << "Test setCenterPoint, setCircumPoint, and setHeight with Cylinder4:\n";
    Cylinder4.setCenterPoint(5, 3);
    Cylinder4.setCircumPoint(0, 3);
    Cylinder4.setHeight(6);
    cout << "Center Point:";
    Cylinder4.printCenterPoint();
    cout << "Circumference Point:";
    Cylinder4.printCircumPoint();
    cout << "Height:" << Cylinder4.getHeight();
    cout << endl;

    cout << "Radius from Cylinder4:" << Cylinder4.calcRadius() << endl;
    cout << "Area from Cylinder4:" << Cylinder4.calcArea() << endl;
    cout << "Circumference from Cylinder4:" << Cylinder4.calcCircumference() << endl;
    cout << "Surface Area from Cylinder4:" << Cylinder4.calcSurfaceArea() << endl;
    cout << "Volume from Cylinder4:" << Cylinder4.calcVolume() << endl;
    cout << endl;

    cout << "Testing the print function for Cylinder5:" << endl;
    Cylinder5.print();
    cout << endl;

    return 0;
}
