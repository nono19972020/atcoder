#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long r, c;
    cin >> r >> c;

    vector<vector<long long> > maze(r, vector<long long>(c));

    for(long long i = 0; i < r; i++){
        for(long long j = 0; j < c; j++) cin >> maze[i][j];
    }

    vector<bool> rev(r, false);
    long long ans = 0;
    for(long long bit = 0; bit < (1 << r); bit++){
        for(long long mask = 0; mask < r; mask++){
            if(bit & (1 << mask)) rev[mask] = true;
            else rev[mask] = false;
        }

        vector<vector<long long> > maze_cp(r, vector<long long>(c));
        maze_cp = maze;

        for(long long i = 0; i < r; i++){
            for(long long j = 0; j < c; j++){
                if(rev[i] == true){
                    maze_cp[i][j] = 1 - maze[i][j];
                }
            }
        }

        vector<long long> ret(c);

        for(long long i = 0; i < c; i++){
            long long cnt = 0;
            for(long long j = 0; j < r; j++) cnt += maze_cp[j][i];

            ret[i] = cnt;
        }

        long long tmp = 0;
        for(long long i = 0; i < c; i++) tmp += max(ret[i], r - ret[i]);

        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}