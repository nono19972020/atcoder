#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> sum(n+1, 0);

    for(long long i = 0; i <= n; i++) sum[i] = i*(i+1)/2;

    long long index;
    long long delta;
    for(long long i = 0; i <= n; i++){
        if(sum[i] >= n){
            index = i;
            delta = sum[i] - n;
            break;
        }
    }

    vector<long long> ans;
    for(long long i = 1; i <= index; i++){
        if(i != delta) ans.push_back(i);
    }
    
    for(long long i = 0; i < ans.size(); i++) printf("%lld\n", ans[i]);

    return 0;
}