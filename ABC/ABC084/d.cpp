#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

bool primeNumber(long long n){
    if(n < 2){
        return false;
    }
    else{
        for(long long i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    vector<long long> likeNumber(100000, 0);
    vector<long long> sum(100001, 0);

    for(long long i = 1; i <= 100000; i++){
        if(primeNumber(i) == true and (i+1) % 2 == 0 and primeNumber((i+1)/2) == true){
            likeNumber[i] = 1;
        }
    }

    for(long long i = 0; i <= 100000; i++){
        sum[i+1] = sum[i] + likeNumber[i];
    }


    long long q;
    cin >> q;

    vector<long long> result(q);

    for(long long i = 0; i < q; i++){
        long long r, l;
        cin >> r >> l;
        result[i] = sum[l+1] - sum[r];
    }

    for(long long i = 0; i < q; i++){
        printf("%lld\n", result[i]);
    }
    return 0;
}