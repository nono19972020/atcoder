#include <iostream>
#include <cstdio>
using namespace std;


int main(){

    long long  N;
    cin >> N;

    long long sum = 0;

    for(long long i = 1; i <= N; i++){
        if(i % 3 != 0 and i % 5 != 0){
            //printf(" i: %d\n", i);
            sum = sum + i;
        }
    }

    printf("%lld\n", sum);

    return 0;
    
}