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
    long long n, k;
    cin >> n >> k;

    long long ma = 0, g = 0;
    long long a;

    for(int i = 0; i < n; i++){
        cin >> a;
        ma = max(ma, a);
        g = gcd(g, a);
    }

    if(k <= ma and k % g == 0){
        printf("POSSIBLE\n");
    }
    else{
        printf("IMPOSSIBLE\n");
    }

    return 0;
}