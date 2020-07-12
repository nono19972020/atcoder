#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> count(10001, 0);

    for(long long x = 1; x <= 100; x++){
        for(long long y = 1; y <= 100; y++){
            for(long long z = 1; z <= 100; z++){
                long long a = x*x + y*y + z*z + x*y + y*z + z*x;
                if(a <= 10000){
                    count[a]++;
                }
            }
        }
    }

    for(long long i = 1; i <= n; i++){
        printf("%lld\n", count[i]);
    }
    return 0;
}