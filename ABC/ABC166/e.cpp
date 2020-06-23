#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    long long n;
    map<long long, long long> dl;
    map<long long, long long> dr;

    cin >> n;

    long long a[n + 1];

    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long l[n + 1], r[n + 1];

    long long maxv = 0;

    for(long long i = 1; i <= n; i++){
        l[i] = i + a[i];
        r[i] = i - a[i];
        maxv = max(r[i], maxv);
    }

    for(long long i = 1; i <= n; i++){
        dl[l[i]] = 0;
        dr[r[i]] = 0;
    }
    
    for(long long i = 1; i <= n; i++){
        dl[l[i]]++;
        dr[r[i]]++;
    }

    long long count = 0;
   
    for(long long x = 2; x <= maxv; x++){
        if(dl[x] > 0 and dr[x] > 0){
            count = count + dl[x] * dr[x];
        }

        
    }

    printf("%lld\n", count);
    

    

    return 0;
}