#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n+1];

    long long sum = 0;
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum % n != 0){
        printf("-1\n");
        return 0;
    }

    long long standard = sum/n;
    long long move = 0;
    long long count = 0;
    for(long long i = 1; i <= n; i++){
        a[i] += move;
        if(a[i] == standard){
            move = 0;
            continue;
        }

        move = a[i] - standard;
        count++;
    }

    printf("%lld\n", count);

    return 0;
}