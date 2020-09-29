#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double a, b ,c;
    cin >> a >> b >> c;

    if(a + b + 2*sqrt(a*b) < c) printf("Yes\n");
    else printf("No\n");

    return 0;
}