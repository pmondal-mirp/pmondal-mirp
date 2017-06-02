#include <iostream>
using namespace std;
int main() {
int N, p;
	cout<<"Enter a number: ";
	cin>>N;
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=5; j++){
			p=i*j;
			cout<<p<<" ";
		}
		cout<<endl;
	}
return 0;
}
		
