#include <iostream>
using namespace std;
int  main() {
int N, a, sum=0;
	cout<<"Enter a number: ";
	cin>>N;
	for(int i=1; i<=N; i++) {
	a=N/i;
		if(N%i==0) {
			sum +=a;
			}
	}
	if(sum == N+1)
		cout<<N<<" is a prime.";
	else cout<<N<<" is not a prime.";
return 0;
}
