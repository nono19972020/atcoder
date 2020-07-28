#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long H, W;
    cin >> H >> W;

    long long SA, SB, SC;

    long long minv = 1e9;
    for(long long y = 1; y < H; y++){
        SA = y * W;
        long long sby = (H - y)/2;
        SB = sby * W;
        SC = (H - y - sby) * W;
        if(SB == 0 || SC == 0) continue;

        long long maxs;
        long long mins;
        maxs = max(SA, SB);
        maxs = max(maxs, SC);
        mins = min(SA, SB);
        mins = min(mins, SC);
        minv = min(minv, maxs-mins);
    }

    for(long long y = 1; y < H; y++){
        SA = y * W;
        long long sbx = W/2;
        SB = (H - y) * sbx;
        SC = (H - y) * (W - sbx);
        if(SB == 0 || SC == 0) continue;

        long long maxs;
        long long mins;
        maxs = max(SA, SB);
        maxs = max(maxs, SC);
        mins = min(SA, SB);
        mins = min(mins, SC);
        minv = min(minv, maxs-mins);
    }

    for(long long x = 1; x < W; x++){
        SA = x * H;
        long long sbx = (W - x)/2;
        SB = sbx * H;
        SC = (W - x - sbx) * H;
        if(SB == 0 || SC == 0) continue;

        long long maxs;
        long long mins;
        maxs = max(SA, SB);
        maxs = max(maxs, SC);
        mins = min(SA, SB);
        mins = min(mins, SC);
        minv = min(minv, maxs-mins);
    }

    for(long long x = 1; x < W; x++){
        SA = x * H;
        long long sby = H/2;
        SB = (W - x) * sby;
        SC = (W - x) * (H - sby);
        if(SB == 0 || SC == 0) continue;

        long long maxs;
        long long mins;
        maxs = max(SA, SB);
        maxs = max(maxs, SC);
        mins = min(SA, SB);
        mins = min(mins, SC);
        minv = min(minv, maxs-mins);
    }

    cout << minv << endl;
    return 0;
}