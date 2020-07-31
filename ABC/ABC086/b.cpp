#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    long long x = stoll(a+b);
    long long y = sqrt(x);

    if(x == y*y) printf("Yes\n");
    else printf("No\n");
    return 0;
}