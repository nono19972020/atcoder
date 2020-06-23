#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> d(n);

    long long sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> d[i];
        sum += d[i];
    }

    sort(d.begin(), d.end(), greater<long long>());

    long long sum_min = d[0];

    for(long long i = 1; i < n; i++){
        sum_min -= d[i];
    }

    long long min_len = max(sum_min, (long long)0);

    printf("%lld\n", sum);
    printf("%lld\n", min_len);

    return 0;

    
}