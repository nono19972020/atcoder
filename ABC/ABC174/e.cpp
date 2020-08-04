#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    long long maxv = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        maxv = max(maxv, a[i]);
    }

    long long right = maxv;
    long long left = 0;

    while(right - left > 1){
        long long mid = (left + right)/2;
        long long cnt_m = 0;
        
        for(long long i = 0; i < n; i++){
            cnt_m += (a[i]+mid-1)/mid -1;
        }

        if(cnt_m <= k) right = mid;
        else left = mid;
    }

    cout << right << endl;
    return 0;
}