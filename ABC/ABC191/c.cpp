#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    char s[h][w];
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            cin >> s[y][x];
        }
    }

    long long ans = 0;
    for(long long y = 0; y < h; y++){
        for(long long x = 0; x < w; x++){
            long long cnt = 0;
            if(y - 1 >= 0 and x - 1 >= 0 and s[y - 1][x - 1] == '#') cnt++;
            if(y - 1 >= 0 and s[y - 1][x] == '#') cnt++;
            if(x - 1 >= 0 and s[y][x - 1] == '#') cnt++;
            if(s[y][x] == '#') cnt++;

            if(cnt == 1 || cnt == 3) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}