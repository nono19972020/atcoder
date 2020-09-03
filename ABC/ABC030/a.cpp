#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b * c > a * d) printf("TAKAHASHI\n");
    else if(b * c == a * d) printf("DRAW\n");
    else printf("AOKI\n");

    return 0;
}