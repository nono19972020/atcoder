#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    map<long long, long long> T;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(T.find(a) == T.end()){
            T[a] = 1;
        }
        else{
            T[a] += 1;
        }
    }

    long long maxv = 0;
    long long max_point;

    for(long long j = 0; j <= m; j++){
        if(maxv < T[j]){
            maxv = T[j];
            max_point = j;
        }
    }

    if(maxv > n/2){
        printf("%lld\n", max_point);
    }
    else{
        printf("?\n");
    }

    return 0;
}