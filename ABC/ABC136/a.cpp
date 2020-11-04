#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    if(c - a + b <= 0) printf("0\n");
    else printf("%lld\n", c - a + b);
    
    return 0;
}