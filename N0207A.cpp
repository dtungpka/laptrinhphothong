#include<iostream>
int main() {
//get long long a,b,c
//check if a,b,c is a triangle

long long a, b, c;
std::cin >> a >> b >> c;
if (a + b > c && a + c > b && b + c > a)std::cout << "YES";
else  std::cout << "NO";


    
    return 0;
}