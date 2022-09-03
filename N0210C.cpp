#include<bits/stdc++.h>
int NEG(int a,int b) {return ((((a)<0) || ((b)<0) && !((a)<0) && ((b)<0)) ? 1 : 0);}
int main(){
    
    double a,b;
    std::cin >> a >> b;
    std::cout<<(abs(int(b+1)-int(a+1)) + NEG(a,b));
    return 0;
}