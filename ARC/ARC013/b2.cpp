#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long c;
    cin >> c;
    long long nmax = 0, mmax = 0, lmax = 0;
    for(long long i = 0; i < c; i++){
        vector<long long> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());
        nmax = max(nmax, a[0]);
        mmax = max(mmax, a[1]);
        lmax = max(lmax, a[2]);
    }

    cout << nmax * mmax * lmax << endl;
    return 0;
}