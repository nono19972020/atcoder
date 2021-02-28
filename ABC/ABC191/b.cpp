#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;
    vector<long long> ans;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a != x) ans.push_back(a);
    }

    if(ans.size() == 0) printf("\n");
    else{
        for(long long i = 0; i < ans.size(); i++){
            if(i != ans.size() - 1) printf("%lld ", ans[i]);
            else printf("%lld\n", ans[i]);
        }
    }

    return 0;
}