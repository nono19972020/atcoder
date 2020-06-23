#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int n;

    long long power = 1;
    

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        power = (power * i)%(1000000000 + 7);
    }

    printf("%lld\n", power);

    return 0;
}