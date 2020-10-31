#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    if(n >= 2*k-1) printf("YES\n");
    else printf("NO\n");

    return 0;
}