#include<iostream>
int main() {
//get 2 long a,b
long a,b;
std::cin >> a >> b;
//get last 2 digits of a*b
long last2digits = (a*b)%100;
	//check if last 2 digits are divisible by 3
    if (last2digits % 3 == 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    
    return 0;
}