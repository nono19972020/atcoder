#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long w, h, x, y;
    cin >> w >> h >> x >> y;
    long double suqare;
    suqare = (long double) w * (long double) h /2;
    
    if(2*x == w and 2*y == h) printf("%.10Lf 1\n", suqare);
    else printf("%.10Lf 0\n", suqare);

    return 0;
}