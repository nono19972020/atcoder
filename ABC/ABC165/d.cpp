#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
    long long a, b, n;

    cin >> a >> b >> n;

    long long minv = min(b - 1, n);


    
    printf("%lld\n", a*minv/b - a*(minv/b));

    return 0;
    
}