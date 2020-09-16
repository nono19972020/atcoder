#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long maxv =  a * c;
    maxv = max(maxv, a *d);
    maxv = max(maxv, b * c);
    maxv = max(maxv, b * d);

    cout << maxv << endl;
    return 0;
}