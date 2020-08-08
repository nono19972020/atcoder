#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> h(n);
    vector<long long> zero(n, 0);
    for(long long i = 0; i < n; i++) cin >> h[i];

    long long i = 0;
    long long cnt = 0;
    while(1){
        if(h == zero) break;
        
        if(h[i] != 0){
            long long start = i;
            long long minv = 100;
            while(i < n and h[i] != 0){
                minv = min(minv, h[i]);
                i++;
            }
            cnt += minv;
            long long goal = i-1;
            for(long long j = start; j <= goal; j++) h[j] -= minv;
            i = 0;
        }
        else{
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}