#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
long long h, w, k, A[309][309], num = 0;
long long cnt[309];
char c[309][309];

void solve(long long cl, long long cr){
    vector<long long> P;

    for(long long y = cl; y <= cr; y++){
        for(long long x = 1; x <= w; x++){
            if(c[y][x] == '#'){
                P.push_back(x);
            }
        }
    }

    sort(P.begin(), P.end());

    for(long long x = 0; x < P.size(); x++){
        long long v1 = 1, v2 = w;
        if(x >= 1){
            v1 = P[x-1] + 1;
        }
        if(x < P.size() - 1){
            v2 = P[x];
        }
        num++;
        for(long long y = cl; y <= cr; y++){
            for(long long k = v1; k <= v2; k++){
                A[y][k] = num;
            }
        }
    }
}

int main(){
    cin >> h >> w >> k;

    for(long long y = 1; y <= h; y++){
        for(long long x = 1; x <= w; x++){
            cin >> c[y][x];
            if(c[y][x] == '#') cnt[y]++;
        }
    }

    vector<long long> vec;
    for(long long y = 1; y <= h; y++){
        if(cnt[y] >= 1){
            vec.push_back(y);
        }
    }

    for(long long y = 0; y < vec.size(); y++){
        long long v1 = 1, v2 = h;
        if(y >= 1) v1 = vec[y-1] + 1;
        if(y < vec.size() - 1) v2 = vec[y];

        solve(v1, v2);
    } 

    for(long long y = 1; y <= h; y++){
        for(long long x = 1; x <= w; x++){
            printf("%lld ", A[y][x]);
            
        }
        printf("\n");
    }
    return 0;
}