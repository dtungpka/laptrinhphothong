#include<iostream>
using namespace std;
int main() {
	//solve ax^2 + bx + c = 0
	//if 2 solutions, x1 and x2 same sign print 1, x1 and x2 different sign print 2
	//if 1 solution and x1 = 0 print 0, if 1 solution and x1 != 0 print 3
	//if no solution print -1

	long a, b, c, delta;
	std::cin >> a >> b >> c;
	if (c == 0) cout << "0";
	else
	{
		delta = b * b - 4 * a * c;
		if (delta > 0)
		{
			if (a * c > 0) cout << "1";
			else cout << "2";
		}
		else if (delta < 0) cout << "-1";
		else cout << "3";
	}
	return 0;
}