#include <iostream>
using namespace std;
int main() {
int arr[10000];
int n, temp;
	cout<<"Enter the number of integers: ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"Enter the number: ";
		cin>>arr[i];
		if(i!=0) {
			for(int a=0; a<i; a++) {
				if(arr[i-a]<arr[i-a-1]) {
					temp=arr[i-a-1];
					arr[i-a-1]=arr[i-a];
					arr[i-a]=temp;
				}
			}
		}
		for (int k=0; arr[k] != 0; k++) {
			cout<<arr[k]<<" ";
		}
	}
	for(int i=0; i<=n-1; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
return 0;
}
