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

    ret = divisor(n);
    long long sum = -n;

    for(long long i = 0; i < ret.size(); i++){
        sum += ret[i];
    }

    if(sum == n){
        printf("Perfect\n");
    }
    else if(sum < n){
        printf("Deficient\n");
    }
    else{
        printf("Abundant\n");
    }
    return 0;
}