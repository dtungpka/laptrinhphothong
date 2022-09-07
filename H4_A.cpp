//get n lnog long, find the maximum number and index of it

#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long max = a[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            index = i;
        }
    }
    cout << max << " " << index+1;
    return 0;
}