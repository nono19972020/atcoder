#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long t;
    cin >> t;

    string atc = "atcoder";
    vector<long long> ans(t);

    for(long long i = 0; i < t; i++){
        string s;
        cin >> s;

        if(s > atc) ans[i] = 0;
        else if(s == atc) ans[i] = 1;
        else{
            long long cnt_a = 0;
            for(long long j = 0; j < s.size(); j++){
                if(s[j] == 'a') cnt_a++;
            }

            if(cnt_a == s.size()) ans[i] = -1;
            else{
                long long index;
                for(long long j = 0; j < s.size(); j++){
                    if(s[j] != 'a') {
                        index = j;
                        break;
                    }

                }
                if(s[index] > 't') ans[i] = index-1;
                else ans[i] = index;
            }
        }
    }

    for(long long i = 0; i < t; i++) printf("%lld\n", ans[i]);

    return 0;
}