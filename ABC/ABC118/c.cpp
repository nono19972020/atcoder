#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long x, long long y){
    if(y == 0){
        return x;
    }

    return gcd(y, x%y);
}

int main(){
    long long n;

    cin >> n;

    long long a[n];

    long long g = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        g = gcd(g, a[i]);
    }

    printf("%lld\n", g);

    return 0;

}