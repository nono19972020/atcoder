#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x, a, b;
    cin >> x >> a >> b;

    if(b-a <= 0) printf("delicious\n");
    else if(0 < b-a and b-a <= x)printf("safe\n");
    else if(b-a > x)printf("dangerous\n");

    return 0;
}