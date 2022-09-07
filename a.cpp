#include<iostream>
using namespace std;
#define MAX 10000000

int main() {
	int n;
	cin >> n;
	int a[MAX];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0];
	int index;
	for(int i = 0; i< n; i++) {
		if(a[i] >= max) {
			max = a[i];
			index = i;
		}
	}
	cout << index;
	return 0;
}
