#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long a, b, k;
    cin >> a >> b >> k;

    set<long long> T;

    for(long long i = a; i < a + k and i <= b; i++){
        T.insert(i);
    }

    for(long long i = b; i > b - k and i >= a; i--){
        T.insert(i);
    }

    set<long long>::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        printf("%lld\n", *it);
    }
    return 0;
}