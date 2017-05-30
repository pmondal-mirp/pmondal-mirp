#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x1, x2, x3, y1, y2, y3, a, b, c, d, e, f;
	double AB, BC, AC;
	cout<< "Enter the x  and y coordinate of A : ";
		cin>> x1 >> y1;
	cout<< "Enter the x  and y coordinate of B : ";
		cin>> x2 >> y2;
	cout<< "Enter the x  and y coordinate of C : ";
		cin>> x3 >> y3;
	a=x1-x2;
	b=x2-x3;
	c=x1-x3;
	d=y1-y2;
	e=y2-y3;
	f=y1-y3;
	AB= sqrt(a*a+d*d);
	cout<< AB <<endl;
	BC= sqrt(b*b+e*e);
	cout<< BC <<endl;
	AC= sqrt(c*c+f*f);
	cout<< AC <<endl;
	if (((AB==BC) && (BC==AC)) && (AC==AB)) {
		cout<< "The triangle is an equilateral triangle.";
	}
 	else if (((AB=BC) || (BC=AC)) || (AB=AC)) {
		cout<< "The triangle is an isosceles triangle.";
	}
	else if (((AB!=BC) && (BC!=AC)) && (AB!=AC)) {
		cout<< "The triangle is a scalene triangle.";
	}
return 0;
}
