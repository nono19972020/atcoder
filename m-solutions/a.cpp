#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
    long long x;
    cin >> x;

    long long ans;
    if(400 <= x and x <= 599) ans = 8;
    else if(600 <= x and x <= 799) ans = 7;
    else if(800 <= x and x <= 999) ans = 6;
    else if(1000 <= x and x <= 1199) ans = 5;
    else if(1200 <= x and x <= 1399) ans = 4;
    else if(1400 <= x and x <= 1599) ans = 3;
    else if(1600 <= x and x <= 1799) ans = 2;
    else if(1800 <= x and x <= 1999) ans = 1;

    cout << ans << endl;
    return 0;
}