#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long double ans = 0;
    for(long long i = 0; i < n; i++){
        long double x;
        string u;
        cin >> x >> u;
        if(u == "JPY") ans += x;
        else ans += 380000.0 * x;
    }

    printf("%.10Lf\n", ans);
    return 0;
}