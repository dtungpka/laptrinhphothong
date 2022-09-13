//problem from https://lqdoj.edu.vn/problem/str01
#include <iostream>
#include <string>
using namespace std;
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    long long l1 = s1.length(), l2 = s2.length();
    cout << max(l1, l2) - min(l1, l2);

}