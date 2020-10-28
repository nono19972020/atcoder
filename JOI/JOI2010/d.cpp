#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long d, n;
    cin >> d >> n;

    vector<long long> T(d);
    for(long long i = 0; i < d; i++) cin >> T[i];

    vector<long long> a(n), b(n), c(n);
    for(long long i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    vector<vector<long long> > dp(d, vector<long long>(n, 0));

    for(long long i = 0; i < d; i++){
        for(long long j = 0; j < n; j++){
            for(long long k = 0; k < n; k++){
                if(i > 0 and a[j] <= T[i] and T[i] <= b[j] and a[k] <= T[i-1] and T[i-1] <= b[k]){
                    dp[i][j] = max(dp[i][j], dp[i-1][k] + abs(c[j] - c[k]));
                }
            }
        }
    }

    long long maxv = 0;
    for(long long i = 0; i < n; i++) maxv = max(maxv, dp[d-1][i]);

    cout << maxv << endl;
    return 0;
}