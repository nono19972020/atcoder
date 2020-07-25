#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long sum = 0;

    for(long long i = 1; i < 10; i++){
        for(long long j = 1; j < 10; j++){
            sum += i*j;
        }
    }

    long long m = sum - n;
}