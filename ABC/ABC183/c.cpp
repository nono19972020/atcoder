#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long t[n][n];
    for(long long y = 0; y < n; y++){
        for(long long x = 0; x < n; x++){
            cin >> t[y][x];
        }
    }

    vector<long long> v(n-1);
    for(long long i = 0; i < n-1; i++) v[i] = i+1;

    long long ans = 0;
    do{
        long long time = t[0][v[0]];
        for(long long i = 0; i < n-1; i++){
            if(i != n-2) time += t[v[i]][v[i+1]];
            else time += t[v[i]][0];
        }

        if(time == k) ans++;
    }while(next_permutation(v.begin(), v.end()));

    cout << ans << endl;

    return 0;
}