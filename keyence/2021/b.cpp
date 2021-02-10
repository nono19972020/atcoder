#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<long long, long long> T;
    long long n, k;
    cin >> n >> k;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(T.find(a) == T.end()) T[a] = 1;
        else T[a]++;
    }

    vector<long long> v(k, 0);
    map<long long, long long>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        long long num = it->first;
        long long cnt = it->second;
        if(cnt >= k) cnt = k;
       
        for(long long i = 0; i < cnt; i++){
            if(v[i] >= num) v[i] = num + 1;
        }
        
    }
    long long ans = 0;
    for(long long i = 0; i < k; i++) ans += v[i];

    cout << ans << endl;
    return 0;
}