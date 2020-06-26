#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k, m, r;
    cin >> n >> k >> m >> r;

    vector<long long> s(n);
    for(long long i = 0; i < n-1; i++){
        cin >> s[i];
    }

    sort(s.begin(), s.end(), greater<long long>());
    
    long long sum = 0;

    for(long long i = 0; i < k; i++){
        sum += s[i];
    }

    if(sum >= r * k){
        printf("0\n");
        return 0;
    }

    sum -= s[k-1];
    long long p = r*k - sum;
    if(0 <= p and p <= m){
        printf("%lld\n", p);
    }
    else{
        printf("-1\n");
    }
   
    return 0;
}