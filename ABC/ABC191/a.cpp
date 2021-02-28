#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long v, t, s, d;
    cin >> v >> t >> s >> d;

    if(v * t <= d and d <= v * s) printf("No\n");
    else printf("Yes\n");

    return 0;
}