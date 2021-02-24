#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long h = n /3600;
    long long t = n % 3600;
    long long m = t / 60;
    long long s = t % 60;

    printf("%02lld:%02lld:%02lld\n", h, m, s);
    return 0;
}