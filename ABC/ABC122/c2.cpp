#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<long long> sum_s(n+1, 0);
    for(long long i = 0; i < n; i++){
        sum_s[i+1] += sum_s[i];
        if(i - 1 >= 0 and s[i-1] == 'A' and s[i] == 'C') sum_s[i+1]++;
    }

    //for(long long i = 0; i <= n; i++) printf("%lld\n", sum_s[i]);
    vector<long long> v;
    for(long long i = 0; i < q; i++){
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long ans;
        //printf("sum_s[l+1] %lld sum_s[r] %lld\n", sum_s[l+1], sum_s[r]);
        ans = sum_s[r+1] - sum_s[l];
        if(l-1 >= 0 and s[l-1] == 'A' and s[l] == 'C') ans--;

        //printf("%lld\n", ans);
        v.push_back(ans);
    }

    for(long long i = 0; i < q; i++) printf("%lld\n", v[i]);
    
    return 0;
}