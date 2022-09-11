//long long n
//calcualte sum of all (2i)^2 with i is even number from 1 to n

#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    for (long long i = 0; i <= n; i++)
    {
       
            sum += (2 * i) * (2 * i);
        
    }
    cout << sum;
    return 0;
}