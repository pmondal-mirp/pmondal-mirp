#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, max=-100000, smax=-100001;
	cout << "Enter four numbers-> ";
	cin >> a >> b >> c >> d;
		if (a>max)
			max = a;
cout<< max << smax<<endl;
	
		if (b>max) {
			max = b;
			smax = a;
	}
cout<< max << smax<<endl;
		if (c>max) {
			max = c;
			smax = b;
}
cout<< max << smax<<endl;
		if (d>max) {
			max = d;
			smax = c;
}
cout<< max << smax<<endl;
	cout << "The maximum number is " << max << endl;
	cout << "The second maximum number is " << smax << endl;
return 0;
}
		                                                                                                                                                     

