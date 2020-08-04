#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long k;
    cin >> k;

    if(k % 2 == 0){
        printf("-1\n");
        return 0;
    }

    string seven;
    for(long long i = 1; i <= 100; i++){
        seven.push_back('7');
        printf("i %lld a\n", i);
        if(stoll(seven)%k == 0){
            printf("%lld\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}