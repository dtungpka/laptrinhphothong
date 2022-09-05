
#include<iostream>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	long long c = (long long)a,d=(long long)b;
	c = a - c > 0 ? a+1 : a ;
	d = b - d >= 0 ? b : b - 1;
	cout << (d - c + 1);

	return 0;
}
