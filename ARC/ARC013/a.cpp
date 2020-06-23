#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, m, l, p, q, r;
    cin >> n >> m >> l >> p >> q >> r;

    int maxv = max((n/p)*(m/q)*(l/r), (n/q)*(m/p)*(l/r));
    maxv = max(maxv, (n/p)*(m/r)*(l/q));
    maxv = max(maxv,(n/r)*(m/q)*(l/p));
    maxv = max(maxv,(n/q)*(m/r)*(l/p));
    maxv = max(maxv,(n/r)*(m/p)*(l/q));
    printf("%d\n", maxv);

    return 0;
}