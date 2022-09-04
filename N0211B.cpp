#include<iostream>

int main() {
    //read 3 2d positions
    long long x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    //check if the 3 points are on the same line
    if ((x1 - x2) * (y1 - y3) == (x1 - x3) * (y1 - y2)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

}