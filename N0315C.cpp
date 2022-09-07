//calculate the sum of unknown number of input

#include <iostream>
using namespace std;
int main()
{
    long n, sum = 0;
    while (cin >> n)
    {
        sum += n;
    }
    cout << sum;
    return 0;
}