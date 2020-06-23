#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;
    set<long long> T;

    long long a;

    for(long long i = 0; i < n; i++){
        cin >> a;
        if(T.find(a) == T.end()){
            T.insert(a);
        }
        else{
            T.erase(a);
        }
    }

    printf("%lld\n", (long long)T.size());

    return 0;
}