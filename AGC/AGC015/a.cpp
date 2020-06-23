#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    if(n == 1 and a != b){
        printf("0\n");
        return 0;
    }

    if(a > b){
        printf("0\n");
        return 0;
    }

    printf("%lld\n", (a+(n-1)*b) - ((n-1)*a + b)+1);

    return 0;
}