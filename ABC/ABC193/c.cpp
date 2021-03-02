#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long cnt = 0;
    long long pivot = (long long)floor(sqrt(n));
    set<long long> T;
    for(long long i = 2; i <= pivot; i++){
        long long x = i * i;
        while(x <= n){
            T.insert(x);
            x *= i;
        }
    }

    cnt = n - T.size();

    cout << cnt << endl;
    return 0;
}