#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long sum = 0;
    set<long long> T;

    for(long long i = 1; i <= n; i++){
        if(sum >= n){
            break;
        }
        sum += i;
        T.insert(i);
    }

    if(sum > n){
        T.erase(sum - n);
    }

    set<long long>::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        printf("%lld\n", *it);
    }

    return 0;
}