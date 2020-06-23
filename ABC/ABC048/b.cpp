#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
long long a, b, x;

long long f(long long n){
    if(n >= 0){
        return n/x + 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    long long A, B;

    cin >> a >> b >> x;

    printf("%lld\n", f(b) - f(a - 1));

    return 0;
    
}
