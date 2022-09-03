#include <iostream>

int main()
{
    long long a,b;
    std::cin >> a >> b;
    std::cout << (((a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0)) ? 1 : 0);
    return 0;
}