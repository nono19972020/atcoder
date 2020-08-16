#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long c[n], p[n];
    long long maxc = -1e18;
    for(long long i = 0; i < n; i++) cin >> p[i], p[i]--;
    for(long long i = 0; i < n; i++) cin >> c[i], maxc = max(maxc, c[i]);

    //全部負の場合
    if(maxc < 0){
        printf("%lld\n", maxc);
        return 0;
    }

    vector<bool> used(n, false);

    long long ans = 0;

    for(long long i = 0; i < n; i++){
        if(used[i] == true) continue;

        vector<long long> loop;
        loop.push_back(i);
        long long now = i;
        //ループを検出
        while(p[now] != i){
            now = p[now];
            loop.push_back(now);
        }

        long long L = loop.size();
        long long S = 0;
        for(long long j = 0; j < L; j++) S += c[loop[j]];

        //ループ内でコストを計算する
        for(long long a_index = 0; a_index < L; a_index++){
            long long a = loop[a_index];
            used[a] = true;
            long long dist_ab = 0;
            long long cost_ab = -c[a];
            
            for(long long b_index = a_index; b_index < a_index + L; b_index++){
                long long b = loop[b_index%L];
                cost_ab += c[b];
                long long max_cost = cost_ab + max(0ll, S)*((k-dist_ab)/L);
                ans = max(ans, max_cost);
                dist_ab++;
                if(dist_ab > k) break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}