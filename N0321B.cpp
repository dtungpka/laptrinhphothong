#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long N, n=0, tmp,sum=0,tmp2;
    cin >> N;
    tmp = N;
    // count the number of digits
    while (tmp != 0)
    {
        tmp /= 10;
        n++;
    }
    tmp = N;
    for (int i = 0; i < int(n);i++ ){
        sum+= pow((tmp % 10),n); 
        tmp /= 10;

    }
    cout<<(sum == N ? "YES":"NO");
}