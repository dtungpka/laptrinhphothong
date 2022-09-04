#include <iostream>
using namespace std;
int main(){
    //get 4 double a,b,c,d
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    //get the average of a,b,c,d

    double average = (a+b+c+d)/4;
    //if average >= 8 print GIOI
    //if average >= 6.5 print KHA
    //if average >= 5 print TRUNG BINH
    //if average < 5 print YEU
    if (average >= 8) cout << "GIOI";
    else if (average >= 6.5) cout << "KHA";
    else if (average >= 5) cout << "TRUNG BINH";
    else cout << "YEU";


}