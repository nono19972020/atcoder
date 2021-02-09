#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool compair(pair<long long, long long> a, pair<long long, long long> b){
    if(a.first + a.second != b.first + b.second){
        return a.first + a.second > b.first + b.second;
    }
    else{
        return a.first > b.first;
    }
}

bool compair2(pair<long long, long long> a, pair<long long, long long> b){
    return 2*a.first + a.second > 2*b.first + b.second;
}

int main(){
    long long n;
    cin >> n;
    vector<pair<long long, long long> > v(n);
    long long sum_a = 0;
    long long sum_t = 0;

    for(long long i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
        sum_a += v[i].first;
    }

    sort(v.begin(), v.end(), compair2);
    /*for(long long i = 0; i < n; i++){
        printf("%lld %lld\n", v[i].first, v[i].second);
    }*/

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        if(sum_a >= sum_t){
            ans++;
            sum_a -= v[i].first;
            sum_t += v[i].first + v[i].second;
            if(sum_a < sum_t){
                printf("%lld\n", ans);
                return 0;
            }
        }
        else{
            printf("%lld\n", ans);
            return 0;
        }
    }
    printf("%lld\n", ans);
    return 0;
}