#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

long long mod = 1e9+7;

long long kai(long long n){
    long long sum = 1;

    for(long long i = 1; i <= n; i++){
        sum = sum *(i % mod);
        sum = sum % mod;
    }

    return sum;
}

int main(){
    long long n;
    cin >> n;

    vector<long long> t(n);
    map<long long, long long> T;

    for(long long i = 0; i < n; i++){
        cin >> t[i];

        if(T.find(t[i]) == T.end()){
            T[t[i]] = 1;
        }
        else{
            T[t[i]]++;
        }
    }

    sort(t.begin(), t.end());
    vector<long long> t_sum(n+1, 0);

    for(long long i = 0; i < n; i++){
        t_sum[i+1] = t_sum[i] + t[i];
    }

    long long count = 0;

    for(long long i = 0; i <= n; i++){
        count += t_sum[i];
    }

    map<long long, long long>::iterator it;

    long long ans = 1;
    for(it = T.begin(); it != T.end(); it++){
        ans = ans *(kai(it->second)%mod);
        ans = ans % mod;
    }

    cout << count << endl;
    cout << ans << endl;
    return 0;

}