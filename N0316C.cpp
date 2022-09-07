//long long n
//calculate fibonacci number of n
//print the Fn%1000000007

#include <iostream>
using namespace std;
int main()
{
    unsigned long long n, a = 0, b = 1, c;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << a ;
    return 0;
}