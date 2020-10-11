#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    set<pair<long long, long long> > T;
    for(long long i = 0; i < m; i++){
        long long x, y;
        cin >> x >> y;
        x--;
        y--;
        T.insert(make_pair(x, y));
    }

    long long ans = 1;
    vector<bool> group_in(n, false);
    for(long long bit = 0; bit < (1 << n); bit++){
        long long cnt = 0;
        for(long long mask = 0; mask < n; mask++){
            if(bit & (1 << mask)) group_in[mask] = true, cnt++;
            else group_in[mask] = false;
        }

        bool flag = true;
        for(long long i = 0; i < n; i++){
            if(group_in[i] == false) continue;

            for(long long j = i + 1; j < n; j++){
                if(group_in[j] == false) continue;

                if(T.find(make_pair(i, j)) == T.end()){
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag == true){
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;
    return 0;
}