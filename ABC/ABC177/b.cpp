#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    long long minv = 1e9;
    for(long long i = 0; i < s.size(); i++){
        if(i + t.size() > s.size()) continue;
        long long start = i;
        long long cnt = 0;
        for(long long j = 0; j < t.size(); j++){
            if(s[start] != t[j]) cnt++;
            start++;
        }
        minv = min(minv, cnt);
    }

    cout << minv << endl;
    return 0;
}