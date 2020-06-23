#include <iostream>
#include <cstdio>
using namespace std;


long long f(long long x){
    long long n = 1;
    while(1){
        if(n*(n-1)/2 < x and x <=(n+1)*n/2){
            break;
        }
        else{
            n++;
        }
    }
    return n;
}

int main(){
    long long x;
    cin >> x;

    printf("%lld\n", f(x));

    return 0;


}