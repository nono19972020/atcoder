#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long double mul = 0;
    vector<long double> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        mul += 1.0/a[i];
    }

    long double ans = 1 / mul;

    printf("%.10Lf\n", ans);
    return 0;
}