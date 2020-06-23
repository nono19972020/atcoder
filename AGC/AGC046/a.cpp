#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0){
        return a;
    }

    return gcd(b, a%b);
}

long long lcs(long long a, long long b){
    return a*b/gcd(a, b);
}

int main(){
    long long x;
    cin >> x;
    long long l = lcs(x, 360);

    cout << l/x << endl;
    return 0;
}