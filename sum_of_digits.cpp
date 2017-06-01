#include <iostream>
using namespace std;
int main() {
	int nod, N;
	cout<<"Enter number of digits of the number: ";
	cin>>nod;
	cout<<"Enter the number: ";
	cin>>N;
	int sum= N%10;
	int a, b;
	int i=nod;
	while (i>1) {
		a= N/10;
		b= a%10;
		i -= 1;
		sum += b;
		N=a;
	}
	cout<<"The sum of all the digits of is: "<< sum <<endl;
return 0;
}
