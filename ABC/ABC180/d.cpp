#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long ans = 0;
    while((double)a*x <= 2e18 and a * x <= b + x and a * x < y){
        x *= a;
        ans++;
    }

    cout << ans  + (y - x -1) / b << endl;
    return 0;
}