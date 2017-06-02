#include <iostream>
using namespace std;
int main() {
int N;
	cout<<"Enter a number: ";
	cin>>N;
	for(int i=1; i<=N; i++){
		for(int a=1; a<=N-i; a++) {
			cout<<" ";
		}
		for(int j=2*i-1; j>0; j--) {
			cout<<"*";
		}
		for(int a=1; a<=N-i; a++) {
			cout<<" ";
		}
	cout<<endl;
	}
	for(int i=1; i<N; i++) {
		for(int a=1; a<=i; a++) {
			cout<<" ";
		}
		for(int j=1; j<=2*N-2*i-1; j++) {
			cout<<"*";
		}
		for(int a=1; a<=i; a++){
			cout<<" ";
		}
	cout<<endl;
	}
return 0;
}

		
