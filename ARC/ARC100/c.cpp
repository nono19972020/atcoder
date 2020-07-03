#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        a[i] -= i+1;
    }

    sort(a.begin(), a.end());

    long long mid = a[n/2];

    for(long long i = 0; i < n; i++){
       sum += abs(a[i]-mid);
    }
    cout << sum << endl;
    return 0;
}