#include <iostream>
using namespace std;
int main() {
	int a, b, c, M;
	cout<< "Enter cutoff marks for grade A(out of 100) -> ";
	cin>> a;
if (a>=100)
	cout<< "Invalid cutoff marks entry";
	cout<< "Enter cutoff marks for grade B(out of 100) -> ";
	cin>> b;
if (b>=100)
	cout<< "Invalid cutoff marks entry";
if (b>=a)
	cout<< "Invalid cutoff marks entry";
	cout<< "Enter cutoff marks for grade C(out of 100) -> ";
	cin>> c;
if (c>=100)
	cout<< "Invalid cutoff marks entry";
if (c>=b)
	cout<< "Invalid cutoff marks entry";
cout<< "Enter marks obtained -> ";
cin>> M;
if (M>=a) {
	cout<< "Your grade is A." <<endl;
}
else if (M>=b) {
	cout<< "Your grade is B." <<endl;
}
else if (M>=c) {
	cout<< "Your grade is C." <<endl;
}
else {
	cout<< "You have FAILED!!" <<endl;
}
return 0;
}


