#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans = a * b - a - b + 1;

    cout << ans << endl;
    return 0;
}