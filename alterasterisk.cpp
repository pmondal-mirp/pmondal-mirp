#include <iostream>
using namespace std;
int main() {
int r, c;
	cout<<"Enter the number of rows and columns: ";
	cin>>r>>c;
	for(int i=1; i<=r; i++) {
		if (i%2==1) {
			for(int a=1; a<=c; a++) {
				if (a%2==1)
					cout<<"*";
				else cout<<" ";
				}
			cout<<endl;
			}
		else {
			for(int b=1; b<=c; b++) {
				if (b%2==1)
					cout<<" ";
				else cout<<"*";
				}
			cout<<endl;
			}
	}
return 0;
}
	
			
