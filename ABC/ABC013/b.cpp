#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    //printf("%lld %lld\n", abs(b-a), abs(10-a)+b);
    long long minv = min(abs(b-a), abs(10-a) + b);
    minv = min(minv, abs(a)+10-b);
    cout << minv << endl;
    return 0;
}