//input n, i,k
//line 2 consists of n integers

//insert k at position i

#include <iostream>
using namespace std;
int main()
{
    long long n, i, k;
    cin >> n >> i >> k;
    long long a[n];
    i = i - 1;
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    for (int j = n; j > i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i] = k;
    for (int j = 0; j < n + 1; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}