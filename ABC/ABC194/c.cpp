#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;
    long long square_sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        square_sum += a[i] * a[i];
    }

    long long ret = (sum * sum - square_sum);
    long long ans = (n - 1) * square_sum - ret;

    cout << ans << endl;
    return 0;
}