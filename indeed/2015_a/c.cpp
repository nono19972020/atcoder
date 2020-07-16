#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<long long> v(1000001, 0);
    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++){
        long long s;
        cin >> s;
        v[s]++;
    }

    vector<long long> q;
    long long Q;
    cin >> Q;

    for(long long i = 0; i < Q; i++){
        long long k;
        cin >> k;
        q.push_back(k);
    }

    vector<long long> sum(1000001, 0);

    for(long long i = 0; i <= 1000000; i++){
        if(i == 0){
            sum[i] = n;
        }
        else{
            sum[i] = sum[i-1] - v[i-1];
        }
    }

    for(long long i = 0; i <= 1000000; i++) sum[i] = n - sum[i];

    //vector<long long> ans(Q);

    for(long long i = 0; i < Q; i++){
        long long pivot = n - q[i];
        long long index = lower_bound(sum.begin(), sum.end(), pivot) - sum.begin();
        if(index == 1) index = 0;

        //ans[i] = index;
        printf("%lld\n", index);
    }
    return 0;
}