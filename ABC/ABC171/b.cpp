#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> p(n);
    long long sum = 0;

    for(long long i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    for(long long i = 0; i < k; i++){
        sum += p[i];
    }

    cout << sum << endl;

    return 0;
}