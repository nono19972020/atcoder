#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long N, C;
    cin >> N >> C;

    vector<pair<long long, long long> > event;

    for(long long i = 0; i < N; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        event.push_back(make_pair(a - 1, c));
        event.push_back(make_pair(b, -c));
    }
    sort(event.begin(), event.end());
    long long ans = 0, fee = 0, t = 0;

    for(long long i = 0; i < 2*N; i++){
        long long x = event[i].first;
        long long y = event[i].second;

        if(x != t){
            ans += min(C, fee) * (x - t);
            t = x;
        }
        fee += y;
    }
    cout << ans << endl;
    return 0;
}