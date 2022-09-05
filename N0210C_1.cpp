#include<iostream>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	long long c = a;
	long long d = b;

	if (a - c > 0) c = a + 1;
	else c = a;

	if (b - d >= 0) d = b;
	else d = b - 1;
	
	long long count = d - c + 1;
	cout << count;

	return 0;
}
