#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

long long keta(long long x){
    string s = to_string(x);
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
    for(long long x = max(1ll, n -200); x <= n; x++){
        if(x + keta(x) == n) ans.push_back(x);
    }


    cout << ans.size() << endl;

    for(auto v : ans) cout << v << endl;

    return 0;
}