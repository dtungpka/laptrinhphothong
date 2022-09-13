#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    long long N,i,Q;
    long long x, arr2[1000],arr3[1000];
    long long arr1[1000];
    for (i = 0; i < 1000; i++){
        arr1[i] = INT_MAX;
        arr2[i] = 0;
        arr3[i] = 0;
    }
    cin >> N;
    for (i = 0; i < N; i++){
        long long inx= 0;
        long long temp;
        cin >>temp;
        while (arr1[inx] < temp )
            inx++;
        arr1[inx] = temp;

        arr2[inx]++;
    }
    cin >>Q;

for (i = 0; i < Q; i++){
    cin >> x;
    arr3[i] = x;
}
for (long long a;a<Q;a++){
    long long inx = 0;
    while (arr1[inx] != arr3[a] || arr1[inx] == INT_MAX)
        inx++;
    if(arr1[inx]==arr3[a])cout <<  arr2[inx] << endl;
    else cout<<0<<endl;
}
    return 0;


}