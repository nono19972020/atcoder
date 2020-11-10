#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    vector<long long> a(5);
    long long k;
    for(long long i = 0; i < 5; i++) cin >> a[i];
    cin >> k;

    for(long long i = 0; i < 5; i++){
        for(long long j = i + 1; j < 5; j++){
            if(abs(a[i] - a[j]) > k){
                printf(":(\n");
                return 0;
            }
        }
    }
    printf("Yay!\n");
    return 0;
}