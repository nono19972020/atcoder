#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    long long ans = a * d - b * c;
    cout << ans << endl;

    return 0;
}