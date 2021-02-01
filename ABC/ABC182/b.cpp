#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    long long maxv = 2;

    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(maxv < a[i]) maxv = a[i];
    }

    long long ans = 0;
    long long pre_cnt = 0;
    for(long long i = 2; i <= maxv; i++){
        long long cnt = 0;
        for(long long j = 0; j < n; j++){
            if(a[j] % i == 0) cnt++;
        }
        if(pre_cnt < cnt) ans = i, pre_cnt = cnt;
    }

    cout << ans << endl;
    return 0;
}