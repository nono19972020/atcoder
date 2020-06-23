#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    long long count;

    for(int i = 1; i <= n; i++){
        if(i == 1){
            count = k;
        }
        else{
            count = count * (k - 1);
        }

    }

    printf("%lld\n", count);

    return 0;
}