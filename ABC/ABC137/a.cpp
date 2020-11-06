#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long maxv = a + b;
    maxv = max(maxv, a - b);
    maxv = max(maxv, a * b);

    cout << maxv << endl;
    return 0;
}