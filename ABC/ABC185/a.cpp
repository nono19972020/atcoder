#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long minv = a;
    minv = min(minv, b);
    minv = min(minv, c);
    minv = min(minv, d);

    cout << minv << endl;
    return 0;
}