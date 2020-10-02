#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> t(n);
    for(long long i = 0; i < n; i++) cin >> t[i];

    sort(t.begin(), t.end());

    cout << t[0] << endl;
    return 0;
}