#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> p(n);
    vector<long long> q(n);
    for(long long i = 0; i < n; i++) cin >> p[i];
    for(long long i = 0; i < n; i++) cin >> q[i];

    vector<long long> v(n);
    for(long long i = 0; i < n; i++) v[i] = i+1;

    long long cnt = 0;
    long long a, b;
    do{
        if(p == v) a = cnt;
        if(q == v) b = cnt;

        cnt++;
    }while(next_permutation(v.begin(), v.end()));

    cout << abs(a-b) << endl;
    return 0;
}