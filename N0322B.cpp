#include <iostream>
using namespace std;
int main(){
    unsigned long long a,b,c,n,count=0;
    cin>>n;
    //print all pytagorean triplets from 1 to n
    for(a=1;a<=n;a++){
        for(b=a;b<=n;b++){
            for(c=b;c<=n;c++){
                if(a*a+b*b==c*c){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    count++;
                }
            }
        }
    }
    if (count==0) cout<<-1<<endl;



}