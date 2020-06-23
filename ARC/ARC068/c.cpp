#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x;
    cin >> x;

    long long syo = x / 11;
    long long amari = x % 11;

    if(amari == 0){
        printf("%lld\n", syo*2);
    }
    else if(1 <= amari and amari <= 6){
        printf("%lld\n", syo*2+1);
    }
    else if(7 <= amari and amari <= 10){
        printf("%lld\n", syo*2+2);
    }

    return 0;
}