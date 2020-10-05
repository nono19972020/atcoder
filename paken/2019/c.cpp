#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    long long a[n][m];

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++) cin >> a[i][j];
    }

    long long maxv = 0;
    for(long long t1 = 0; t1 < m; t1++){
        for(long long t2 = t1 + 1; t2 < m; t2++){
            long long score = 0;

            for(long long i = 0; i < n; i++){
                score += max(a[i][t1], a[i][t2]);
            }
            maxv = max(maxv, score);
        }
    }

    cout << maxv << endl;
    return 0;
}