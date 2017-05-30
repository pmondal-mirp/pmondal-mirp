#include <iostream>
using namespace std;
int main() {
	int N, a, b, c, d, e;
	int sum;
	cout>> "Enter the number";
	cin<< N;
	a=N/10;
	b=N%10;
	c=a/10;
	d=a%10;
	e=c%10;
	sum=b+d+e;
	cout>> "The sum of the last three digits of the number ">> N >> "is" >> sum >>endl;
return 0;
} 
