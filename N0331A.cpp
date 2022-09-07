//long long n, print all number from n to 1

#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (long long i = n; i > 0; i--)
    {
        cout << i << " ";
    }
    return 0;
}