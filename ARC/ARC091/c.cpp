#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    if(n == 1 and m == 1){
        printf("1\n");
    }
    else if(n == 1 and m >= 2){
        printf("%lld\n", m-2);
    }
    else if(n >= 2 and m == 1){
        printf("%lld\n", n-2);
    }
    else if(n >= 2 and m >= 2){
        printf("%lld\n", (n-2)*(m-2));
    }

    return 0;
}