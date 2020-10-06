#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    vector<long long> x(n);
    vector<long long> y(n);

    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;

        x[i] = a;
        y[i] = b;
        ans += b - a;
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    long long mid;
    if(n % 2 != 0) mid = (n-1)/2;
    else mid = n/2;

    for(long long i = 0; i < n; i++) ans += abs(x[i] - x[mid]) + abs(y[i] - y[mid]);

    cout << ans << endl;
    return 0;
}