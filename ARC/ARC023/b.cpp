#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long r, c, d;
    cin >> r >> c >> d;

    long long a[r][c];

    for(long long y = 0; y < r; y++){
        for(long long x = 0; x < c; x++){
            cin >> a[y][x];
        }
    }
    long long maxv = 0;
    if(d % 2 == 0){
        for(long long y = 0; y < r; y++){
            for(long long x = 0; x < c; x++){
                if((x + y) % 2 == 0 and x+y <= d){
                    maxv = max(maxv, a[y][x]);
                }
            }
        }
    }
    else{
        for(long long y = 0; y < r; y++){
            for(long long x = 0; x < c; x++){
                if((x + y) % 2 != 0 and x+y <= d){
                    maxv = max(maxv, a[y][x]);
                }
            }
        }
    }

    cout << maxv << endl;
    return 0;
}