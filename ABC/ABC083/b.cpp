#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int f(int n){
    int sum = 0;
    while(n > 0){
        sum = sum + n % 10;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    int a, b;

    long long  sum = 0;

    cin >> n >> a >> b;

    //printf("f(20) %d\n", f(20));
    
    for(int i = 1; i <= n; i++){
        if(f(i) >= a and f(i) <= b){
            sum = sum + i;
            
        }
    }

    printf("%lld\n", sum);

    return 0;
}