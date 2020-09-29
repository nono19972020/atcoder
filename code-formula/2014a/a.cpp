#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    for(long long i = 0; i <= 100; i++){
        if(i*i*i == n){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}