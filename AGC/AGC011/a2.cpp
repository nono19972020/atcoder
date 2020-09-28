#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, c, k;
    cin >> n >> c >> k;

    vector<long long> T(n);

    for(long long i = 0; i < n; i++) cin >> T[i];

    sort(T.begin(), T.end());

    long long ans = 0;
    long long cnt = 0;
    long long left = T[0];
    long long right = T[0] + k;

    for(long long i = 0; i < n; i++){
        if(cnt < c and left <= T[i] and T[i] <= right){
            cnt++;
            right = min(right, T[i] + k);
        }
        else if(cnt >= c){
            ans++;
            cnt = 1;
            left = T[i];
            right = T[i] + k;
        }
        else if(T[i] > right){
            ans++;
            cnt = 1;
            left = T[i];
            right = T[i] + k;
        }
    }
    ans++;
    cout << ans << endl;
    return 0;
}