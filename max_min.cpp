#include <iostream>
using namespace std;
int main() {
	int n, N, max, min;
	cout<<"Enter number of inputs: ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"Enter number: ";
		cin>>N;
		if (i==0)
		{ max=N;
		min=N;
		}
		if (N>max) 
		max=N;
		else if(N<min) 
		min=N;
		}
	cout<<"The max number is: "<<max<< " and the min number is : "<<min<<endl;
return 0;
}			
