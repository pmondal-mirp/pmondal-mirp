#include <iostream>
using namespace std;
int main() {
int counter=0, N, sum, a, avg;
	cout<<"Enter the number of values: ";
	cin>> N;
	while (counter<N) {
		cout<< "Enter "<<counter<<"th "<< "number: "<<endl;
		cin>>a;
		sum += a;
		counter++;
		}
	avg = sum/N;
	cout<< "The average of the entered numbers is "<< avg << "." <<endl;
return 0;
}
 
	
