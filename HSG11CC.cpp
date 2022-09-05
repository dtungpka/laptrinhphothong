#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if (n == 1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
//read cin from file DAYINT.INP
freopen("DAYINT.INP","r",stdin);
vector<int> founds;
vector<int> primes;
cin >> k;
//while not end of file
while (!cin.eof()){
    int x;
    cin >> x;
    //if x is prime
    if (isPrime(x)){
        //add x to primes
        primes.push_back(x);
    }
//...
}