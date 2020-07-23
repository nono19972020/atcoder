#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long n = (long long)s.size();

    long long cnt = 0;

    //一致しているペア数を数える
    for(long long i = 0; i < n; i++){
        if(s[i] == s[n-1-i])cnt++;
    }

    long long ans = 0;
    if(cnt == n) ans = (n - n%2) * 25;//全部一致している場合 奇数の真ん中は変えても意味がない
    else if(cnt == n-2) ans = cnt*25 + 24*2;//一文字変えると回文になる場合
    else ans = 25*n;

    cout << ans << endl;
    return 0;
}