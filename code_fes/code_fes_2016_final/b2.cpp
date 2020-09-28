#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++) a[i] = i+1;

    vector<long long> sum_a(n+1, 0);
    for(long long i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];

    long long index = 0;
    long long delta = 0;

    for(long long i = 0; i <= n; i++){
        if(sum_a[i] >= n){
            index = i-1;
            delta = sum_a[i] - n;
            break;
        }
    }

    //printf("delta %lld\n", delta);

    vector<long long> ans;

    for(long long i = 0; i <= index; i++){
        if(delta == i+1) continue;
        ans.push_back(i+1);
    }

    for(auto v : ans) printf("%lld\n", v);

    return 0;
}