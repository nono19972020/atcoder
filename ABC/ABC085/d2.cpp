#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, h;
    cin >> n >> h;
    vector<long long> swing(n);
    vector<long long> throwing(n);

    for(long long i = 0; i < n; i++) cin >> swing[i] >> throwing[i];

    sort(swing.begin(), swing.end(), greater<long long>());
    sort(throwing.begin(), throwing.end(), greater<long long>());

    long long cnt = 0;
    long long throwing_index = 0;

    while(throwing_index < n and h > 0 and throwing[throwing_index] > swing[0]){
        h -= throwing[throwing_index];
        cnt++;
        throwing_index++;
    }

    if(h <= 0){
        printf("%lld\n", cnt);
        return 0;
    }

    cnt += (h + swing[0] - 1) /swing[0];
    
    printf("%lld\n", cnt);
    return 0;
}