#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> r(n);
    for(long long i = 0; i < n; i++) cin >> r[i];

    sort(r.begin(), r.end(), greater<long long>());

    vector<long long> s;
    for(long long i = 0; i < k; i++) s.push_back(r[i]);

    sort(s.begin(), s.end());

    long double rate = 0;

    for(long long i = 0; i < k; i++) rate = (rate + (long double) s[i])/2;
    
    printf("%.10Lf\n", rate);
    return 0;
}