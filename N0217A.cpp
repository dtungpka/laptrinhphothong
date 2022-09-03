#include<bits/stdc++.h>

int main(){
    bool flag = false;
    //read a,b,c from stdin,  if a,b,c are not equal, then print 1, else print 0
    long long a,b,c;
    std::cin >> a >> b >> c;
    if(a != b || b != c){
        flag = true;
    }
    if(flag){
        std::cout << "NO";
    }
    else{
        std::cout << "YES";
    }

}