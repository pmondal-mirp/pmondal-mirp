#include <iostream>
using namespace std;
int main() {
int h, l, x;
	cout<<"Enter height of parallelogram: ";
	cin>>h;
	cout<<"Enter length of pareallelgram: ";
	cin>>l;
	x=h-1;
	for(int i=x; i>=0; i--) {
		for(int a=1; a<=i; a++)
			cout<<" ";
		for(int b=1; b<=l; b++)
			cout<<"*";
	cout<<endl;
	}
return 0;
}

