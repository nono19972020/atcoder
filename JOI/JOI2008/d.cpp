#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;

int main(){
    long long m;
    cin >> m;
    vector<pair<long long, long long> > v(m);
    for(long long i = 0; i < m; i++) cin >> v[i].first >> v[i].second;

    long long n;
    cin >> n;

    vector<pair<long long, long long> > s(n);
    set<pair<long long, long long> > T;
    for(long long i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second;
        T.insert(make_pair(s[i].first, s[i].second));
    } 

    for(long long i = 0; i < m; i++){
        for(long long j = 0; j < n; j++){
            long long dx = s[j].first - v[i].first;
            long long dy = s[j].second - v[i].second;
            long long cnt = 0;
            for(long long i2 = 0; i2 < m; i2++){
                if(T.find(make_pair(v[i2].first+dx, v[i2].second+dy)) != T.end()) cnt++;
                else break;
            }
            if(cnt == m){
                printf("%lld %lld\n", dx, dy);
                return 0;
            }
        }
    }
}