#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

int main(){
    long long n;
    cin >> n;

    vector<long long> ret;
    ret =  divisor(n);

    for(long long i = 0; i < ret.size(); i++) printf("%lld\n", ret[i]);

    return 0;
}