#include <iostream>
using namespace std;
#define max(x,y) (x>y?x:y)
int main(){
    unsigned long long a,b,A=0,B=0;
    cin >>a>>b;
    for (auto i = 1; i < max(a,b)/2+1; i++)
    {
       if(a%i == 0)A+= i;
       if(b%i == 0)B+= i;
    }
    if (A == b && a == B)cout<<"YES";
    else cout<<"NO";

}