#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    if(m < 2*n || m > 4*n){
        printf("-1 -1 -1\n");
        return 0;
    }

    if(m == 2* n){
        printf("%lld 0 0\n", n);
    }
    else if(2*n < m and m < 3*n){
        printf("%lld %lld 0", 3*n-m, m-2*n);
    }
    else if(m == 3*n){
        printf("0 %lld 0\n", n);
    }
    else if(3*n < m and m < 4*n){
        printf("0 %lld %lld\n", 4*n-m, m-3*n);
    }
    else if(m == 4*n){
        printf("0 0 %lld\n", n);
    }
    return 0;
}