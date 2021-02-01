#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans = 2 * a + 100;
    ans -= b;

    cout << ans << endl;

    return 0;
}