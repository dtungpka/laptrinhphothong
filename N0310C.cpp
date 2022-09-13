//input n, output sum 1! + 2! + 3! + ... + n!

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, factorial = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += factorial;
    }
    cout << sum % 1000000007;
    return 0;
}