#include <iostream>
using namespace std;
int main() {
int N, a;
	cout<<"Enter the number: ";
	cin>>N;
	for (int i=1; i<=N; i++) {
	a = N/i;
		if (N%i==0)
		cout<<a<<endl;
	}
return 0;
}


