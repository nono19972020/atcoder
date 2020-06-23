#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;

    cin >> n >> k;

    long double p[n+1];

    int a;
    for(long long i = 1; i <= n; i++){
        cin >> a;
        long double sum = 0;
        for(int j = 1; j <= a; j++){
            sum += j;
        }
        p[i] = sum/(long double)a;

    }

    vector<long double> S(n+1, 0);

    for(long long i = 1; i <= n; i++){
        S[i] = S[i-1] + p[i];
    }
    long double maxv = 0;
    for(long long i = 1; i + k-1 <= n; i++){
        maxv = max(S[i+k-1] - S[i-1], maxv);
    }

    printf("%.10Lf\n", maxv);

    return 0;
    
}