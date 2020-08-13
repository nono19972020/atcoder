#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long x;
    cin >> x;

    for(long long i = 0; i <= 10000; i++){
        if(i*i*i*i == x){
            printf("%lld\n", i);
            return 0;
        }
    }
}