#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<long long> v(n+1, 0);

    for(long long i = 0; i < n; i++){
        v[i+1] = v[i] + a[i];
    }

    long long sum = 0;

    for(long long i = 0; i+k-1 < n; i++){
        sum += v[k+i] - v[i];
    }

    cout << sum << endl;

    return 0;
}

