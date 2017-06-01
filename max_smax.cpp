#include <iostream>
using namespace std;
int main() {
	int N, n;
	int max=-100000, smax=-100001;                
	cout<<"Enter number of inputs: ";
	cin>>N;
	for (int i=0; i<N; i++) {
	cout<<"Enter number: ";
	cin>>n;
		if(n>smax && n<=max) {
			smax=n;
			}
		else if (n>max) {
			max=smax;
			max=n;
			}
	}
	cout<<"The max number is: "<< max << "and "<<"the second max number is: "<< smax <<endl;
return 0;
}
