#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long double ans = 0;

    ans += 1;

    if(k-1 >= 1) ans += 3*(k-1);
    
    if(k+1 <= n) ans += 3*(n-k);
    
    if(k-1 >= 1 and k+1 <= n) ans += 6 * (k-1) * (n-k);
    
    ans = ans / (n*n*n);

    printf("%.10Lf\n", ans);
    return 0;
}