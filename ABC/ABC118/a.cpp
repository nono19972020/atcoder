#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    if(b % a == 0) printf("%lld\n", a+b);
    else printf("%lld\n", b-a);

    return 0;
}