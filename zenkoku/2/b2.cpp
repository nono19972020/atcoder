#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

long long mod = 998244353;

int main(){
    long long n;
    cin >> n;

    vector<long long> d(n);
    vector<long long> cnt(n, 0);

    for(long long i = 0; i < n; i++){
        cin >> d[i];
        if(i == 0 and d[i] != 0){
            printf("0\n");
            return 0;
        }
        else if(i != 0 and d[i] == 0){
            printf("0\n");
            return 0;
        }

        cnt[d[i]]++;
    }


    for(long long i = 0; i < n; i++){
        if(i > 0 and cnt[i] > 0 and cnt[i-1] == 0){
            printf("0\n");
            return 0;
        }
    }

    long long ans = 1;
    long long prev = 0;
    long long now = 0;

    for(long long i = 0; i < n; i++){
        if(i == 0){
            prev = cnt[i];
            prev %= mod;
            continue;
        }
        now = cnt[i];
        prev %= mod;
        now %= mod;

        long long start = 1;
        for(long long j = 0; j < now; j++){
            start *= prev;
            start %= mod;
        }
        ans *= start;
        ans %= mod;
        prev = now;
    }
    
    cout << ans << endl;
    return 0;
}