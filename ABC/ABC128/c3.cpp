#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<vector<long long> > s(m, vector<long long>());

    for(long long i = 0; i < m; i++){
        long long k;
        cin >> k;
        for(long long j = 0; j < k; j++){
            long long a;
            cin >> a;
            s[i].push_back(a-1);
        }
    }
    vector<long long> p(m);
    for(long long i = 0; i < m; i++) cin >> p[i];

    long long ans = 0;
    vector<bool> switch_on(n);
    for(long long bit = 0; bit < (1 << n); bit++){
        for(long long mask = 0; mask < n; mask++){
            if(bit & (1 << mask)) switch_on[mask] = true;
            else switch_on[mask] = false;
        }

        long long light = 0;
        for(long long i = 0; i < m; i++){
            long long cnt = 0;
            for(long long j = 0; j < s[i].size(); j++){
                if(switch_on[s[i][j]] == true) cnt++;
            }
            if(cnt % 2 == p[i]) light++;
        }
        if(light == m) ans++;
    }

    cout << ans << endl;
    return 0;
}