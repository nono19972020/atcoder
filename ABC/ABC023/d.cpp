#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

long long n;
vector<long long> h(1e5+1);
vector<long long> s(1e5+1);

bool check(long long height){
    //height以下で全ての風船を割れるか
    for(long long i = 0; i < n; i++){
        if(height < h[i]) return false;
    }

    //全ての風船の制限時間を求める
    vector<long double> cnt(n);
    for(long long i = 0; i < n; i++){
        cnt[i] = ((long double) height - (long double) h[i]) / ((long double) s[i]);
    }

    //制限時間の小さい順にソートする
    sort(cnt.begin(), cnt.end());

    //割る時間がi, 制限時間がcnt[i]
    for(long long i = 0; i < n; i++){
        if(cnt[i] < (long double) i) return false;
    }

    return true;
}

int main(){
    cin >> n;

    for(long long i = 0; i < n; i++) cin >> h[i] >> s[i];

    long long left = 0;
    long long right = 1e16;
    while(right - left > 1){
        long long mid = (right + left) /2;

        if(check(mid) == true) right = mid;
        else left = mid;
    }

    cout << right << endl;
    return 0;
}