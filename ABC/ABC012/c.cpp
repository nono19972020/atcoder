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

    long long sum = 0;

    for(long long i = 1; i < 10; i++){
        for(long long j = 1; j < 10; j++){
            sum += i*j;
        }
    }

    long long m = sum - n;

    vector<long long> ret;

    ret = divisor(m);

    for(long long i = 0; i < ret.size(); i++){
        if(ret[i] < 10 and m/ret[i] < 10) printf("%lld x %lld\n", ret[i], m/ret[i]);
    }
    return 0;
}