#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    long long ans = 1e12;

    for(long long i = 0; i <= 200000; i += 2){
        long long cost = 0;
        cost += c * i;
        if(x - i/2 >= 0) cost += a * (x - i/2);
        if(y - i/2 >= 0) cost += b * (y - i/2);

        ans = min(ans, cost);
    }

    cout << ans << endl;
    return 0;
}