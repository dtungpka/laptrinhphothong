#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector v
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //delete at k index
    v.erase(v.begin()+k-1);
    //cout
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}