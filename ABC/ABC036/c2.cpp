#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    set<long long> T;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        T.insert(a[i]);
    }

    set<long long>::iterator it;
    map<long long, long long> dict;
    long long index = 0;
    for(it = T.begin(); it != T.end(); it++){
        dict[*it] = index;
        index++;
    }

    for(long long i = 0; i < n; i++) printf("%lld\n", dict[a[i]]);
    
    return 0;
}