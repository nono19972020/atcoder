#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    long long minv = 100;
    long long a[h][w];
    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            cin >> a[i][j];
            minv = min(minv, a[i][j]);
        }
    }

    long long ans = 0;
    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            ans += a[i][j] - minv;
        }
    }

    cout << ans << endl;
    return 0;
}