```````````````````````````````````````````````````````#include <iostream>
using namespace std;
int main() {
 int N;
	cout<<"Enter the number: ";
	cin>>N;
	for(int i=1; i<=N; i++){
		for(int a=N-i; a>=1; a--) {
			cout<<"*";
		}
		for(int b=i; b>=1; b--) {
			cout<<i;
		}
		cout<<endl;
	}
return 0;
} 
