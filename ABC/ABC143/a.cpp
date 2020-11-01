#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    if(a - 2*b <= 0) printf("0\n");
    else printf("%lld\n", a-2*b);

    return 0;
}