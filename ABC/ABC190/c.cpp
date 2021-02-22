#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    long long a[m], b[m];
    for(long long i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }

    long long k;
    cin >> k;
    long long c[k], d[k];
    for(long long i = 0; i < k; i++) {
        cin >> c[i] >> d[i];
        c[i]--;
        d[i]--;
    }

    vector<long long> on_bowl(n, 0);
    long long ans = 0;
    for(long long bit = 0; bit < (1 << k); bit++){
        on_bowl.assign(n, 0);
        for(long long mask = 0; mask < k; mask++){
            if(bit & (1 << mask)){
                on_bowl[c[mask]]++;
                
            }
            else{
                on_bowl[d[mask]]++;
            }
        }

        long long cnt = 0;
        for(long long i = 0; i < m; i++){
            if(on_bowl[a[i]] >= 1 and on_bowl[b[i]] >= 1) cnt++;
            
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}