#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long a, long long b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

int main(){
    long long w, h;
    cin >> w >> h;

    long long g = gcd(w, h);

    w = w/g;
    h = h/g;

    if(w == 4) printf("4:3\n");
    else printf("16:9\n");
    return 0;
}