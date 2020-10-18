#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<long long> v(n+1);
    v[n] = 0;
    for(long long i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<long long> v2;
    for(long long i = 0; i <= n; i++){
        for(long long j = 0; j <= n; j++) v2.push_back(v[i] + v[j]);
    }

    sort(v2.begin(), v2.end());

    long long maxv = 0;
    for(long long i = 0; i < v2.size(); i++){
        if(m - v2[i] >= 0){
            auto it = upper_bound(v2.begin(), v2.end(), m - v2[i]);
            it--;
            maxv = max(maxv, v2[i] + *it);
        }
    }

    cout << maxv << endl;

    return 0;
}