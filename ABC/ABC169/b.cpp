#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    
    vector<long double> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            printf("0\n");
            return 0;
        }
    }

    long double sum = a[0];

    for(long long i = 1; i < n; i++){
        sum = sum * a[i];
    }

    if(sum > 1000000000000000000){
        printf("-1\n");
    }
    else{
        printf("%lld\n", (long long)sum);
    }

    return 0;
}