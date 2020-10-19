#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;

    set<long long> T;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;

        if(T.find(a) == T.end()) T.insert(a);
        else{
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}