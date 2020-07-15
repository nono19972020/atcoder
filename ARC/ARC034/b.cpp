#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long keta_sum(long long n){
    string s = to_string(n);
    long long sum = 0;

    for(long long i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    long long n;
    cin >> n;

    vector<long long> ans;
    for(long long x = max(0ll, n - 200); x <= n; x++){
        if(x + keta_sum(x) == n){
            ans.push_back(x);
        }
    }

    if(ans.size() == 0){
        printf("0\n");
    }
    else{
        printf("%lu\n", ans.size());

        for(long long i = 0; i < ans.size(); i++){
            printf("%lld\n", ans[i]);
        }
    }
    return 0;
}