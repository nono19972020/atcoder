#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long x = (a+b)/2;
    long long y = (a-b)/2;

    printf("%lld %lld\n", x, y);
    return 0;
}