#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n], b[n];
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < n; i++) cin >> b[i];

    long long sum = 0;
    for(long long i = 0; i < n; i++){
        sum += a[i] * b[i];
    }

    if(sum == 0) printf("Yes\n");
    else printf("No\n");

    return 0;
}