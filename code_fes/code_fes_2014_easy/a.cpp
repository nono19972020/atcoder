#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    for(long long i = 0; i < n; i++) cin >> a[i];

    long double sum = 0;
    for(long long i = 0; i < n; i++){
        if(i + 1 < n) sum += a[i+1] - a[i];
    }

    long double ans = sum / (n - 1);

    printf("%.10Lf\n", ans);
    return 0;
}