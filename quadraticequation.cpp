#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a, b, c;
double D, R1, R2;
	cout<<"The quadratic equation is ax^2+bx+c=0";
	cout<< "Enter a: ";
	cin>> a;
	cout<< "Enter b: ";
	cin>> b;
	cout<< "Enter c: ";
	cin>> c;
	D = b*b-4*a*c;
	R1 = (sqrt(D) - b)/(2*a);
	R2 = (0-b-sqrt(D))/(2*a);
	if (D<0) {
		cout<< "The roots are imaginary!";
		}
	else if (D==0) {
		cout<< "Both the roots are "<< R1 << "." <<endl;
		}
	else if (D>0) {
		cout<< "The roots are "<<R1<< " and "<<R2<< "." <<endl;
		}
return 0;
} 
