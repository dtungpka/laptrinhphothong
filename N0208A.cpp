#include<iostream>
using namespace std;
int main()
{
long long a,b,c,delta;
   cin>>a>>b>>c;
       if(a == 0){cout<<"NOSOL";return 0;};
   delta = b*b - 4*a*c;

    if(delta < 0)
    {
        cout<<"NOSOL";
    }
    else if(delta == 0)
    {
        cout<<"ONE";
    }
    else
    {
        cout<<"TWO";
    }
   return 0;
}
