// CSC 223 Review Project.cpp : This file contains the code for the Review which will be on tree branches, PointType Class, CircleType Class, CylinderType class
//

#include <iostream>
#include "CircleType.h"

using namespace std;

int main()
{
	cout << "Default constructor testing " << endl;
	CircleType<int> Cir1;
	cout << "CenterPoint: ";
	Cir1.printCenterPoint();
	cout << "Circumference Point: ";
	Cir1.printCircumPoint();

	cout << "Test constructor w/ parameters" << endl;
	CircleType<double> Cir2(5.5, 7.2, -6.4, 3.3);
	cout << "CenterPoint: ";
	Cir2.printCenterPoint();
	cout << "Circumference Point: ";
	Cir2.printCircumPoint();

	cout << "Testint setCenterPoint, setCircumPoint" << endl;
	Cir1.setCenterPoint(3, 7);
	Cir1.setCircumPoint(6, -2);
	cout << "CenterPoint: ";
	Cir1.printCenterPoint();
	cout << "Circumference Point: ";
	Cir1.printCircumPoint();

	cout << "Testing getCenterPoint, gertCircumPoint" << endl;
	double x1, y1, x2, y2;
	Cir2.getCenterPoint(x1, y1);
	Cir2.getCircumPoint(x2, y2);
	cout << "x1 = " << x1 << ", y1 = " << y1 << ", x2 = " << x2 << ", y2 = " << y2 << endl;

	cout << "Testing operatiors: " << endl;
	Cir2.print();
	cout << endl;

};
