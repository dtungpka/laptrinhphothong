#include <iostream>

using namespace std;
int main(){
    //found = max int
    long long n,k,found = 2147483647;
    cin>>n>>k;
    for (long long i = 0; i < n; i++){
        long long x;
        cin>>x;
        if (x > k && x < found){
            found = x;
            
        }
    }
    if (found == 2147483647){
        cout<<"-1";
    }else{
        cout<<found;
    }
    return 0;
}