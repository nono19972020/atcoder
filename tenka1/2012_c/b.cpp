#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<string> t;

    long long l = 0, r = 0;

    while(l < (long long) s.size()){
        r++;
        if(r+1 < s.size() and '0' <= s[r+1] and s[r+1] <= '9') r += 2;
        else r++;

        t.push_back(s.substr(l, r-l));
        l = r;
    }

    string mark[] = {"S", "H", "D", "C"};
    string num[] = {"10", "J", "Q", "K", "A"};
    string ans = s;
    for(long long i = 0; i < 4; i++){
        long long cnt = 0;
        string tmp = "";

        for(auto s: t){
            if(cnt == 5) break;
            
            bool ok = false;
            for(long long j = 0; j < 5; j++){
                if(s == mark[i] + num[j]) ok = true;
            }
            if(ok == true){
                cnt++;
                continue;
            }
            tmp += s;
        }
        if(tmp.size() < ans.size()) ans = tmp;//最小値を更新
    }

    if(ans == "") cout << '0' << endl;
    else cout << ans << endl;

    return 0;
}