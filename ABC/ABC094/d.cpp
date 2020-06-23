#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];

    long long maxv = 0;
    long long index_max;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(maxv < a[i]){
            maxv = a[i];
            index_max = i;
        }
    }

    long long comb_standard = maxv/2;
    long long comb_min = comb_standard*comb_standard;
    long long r = 0;
    for(long long i = 0; i < n; i++){
        if(i == index_max){
            continue;
        }

        if(comb_min > (comb_standard - a[i])*(comb_standard - a[i])){
            comb_min = (comb_standard - a[i])*(comb_standard - a[i]);
            r = a[i];
        }
    }

    printf("%lld\n", maxv);

    printf("%lld\n", r);

    return 0;
}