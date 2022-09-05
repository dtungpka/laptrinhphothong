#include <iostream>
#include <vector>
using namespace std;
int main(){
    //read cin till no more input
    vector<int> v;
    while (!cin.eof()){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //find the fibonacci number of every number in v
    for (int i = 0; i < v.size(); i++){
        int a = 0;
        int b = 1;
        int c = 1;
        for (int j = 0; j < v[i]; j++){
            a = b;
            b = c;
            c = a + b;
        }
        cout<<a<<"\n";
    }

    return 0;
    
}