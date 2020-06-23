#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b ,c;
    cin >> a >> b >> c;
    long long y = 1000000007;
    a = a%y;
    b = b%y;
    c = c%y;

    long long x = (a*b)%y;
    x = (x*c)%y;

    cout << x << endl;

    return 0;
}