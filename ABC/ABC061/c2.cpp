#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    map<long long, long long> T;

    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        if(T.find(a) == T.end()) T[a] = b;
        else T[a] += b;
    }

    long long cnt = 0;
    map<long long, long long>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        if(cnt < k and k <= cnt + it->second){
            printf("%lld\n", it->first);
            return 0;
        }
        cnt += it->second;
    }
}