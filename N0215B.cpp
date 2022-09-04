#include <iostream>
#include <vector>
using namespace std;
int main() {
    //input 5 long long in vector
    vector<long long> v;
    vector<short> counts;
    bool flag = false;
    //initialize vector
    for (int i = 0; i < 5; i++) {
        long long temp;
        cin >> temp;
        if (v.size() == 0) {
            v.push_back(temp);
            counts.push_back(1);
        }
        else{
            for (int j = 0; j < v.size(); j++)if (v[j] == temp) { if (++counts[j] >= 4)flag = true;break; }
            else if (v.size() - 1 == j) { v.push_back(temp); counts.push_back(1); }
        }
        if (flag)break;
    }
    cout << (flag ? "YES" : "NO");
    return 0;

}