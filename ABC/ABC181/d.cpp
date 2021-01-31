#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size() == 1 and s == "8"){
        printf("Yes\n");
        return 0;
    }
    else if(s.size() == 1 and s != "8"){
        printf("No\n");
        return 0;
    }
    else if(s.size() == 2){
        long long num = (s[0] - '0') * 10 + (s[1] - '0');
        long long num2 = (s[1] - '0') * 10 + (s[0] - '0');
        if(num % 8 == 0 || num2 % 8 == 0) printf("Yes\n");
        else printf("No\n");

        return 0;
    }

    vector<long long> cnt(10, 0);
    for(long long i = 0; i < s.size(); i++) cnt[s[i] - '0']++;

    for(long i = 1; i < 10; i++){
        if(cnt[i] == 0) continue;
        cnt[i]--;
        for(long long j = 1; j < 10; j++){
            if(cnt[j] == 0) continue;
            cnt[j]--;
            for(long long k = 1; k < 10; k++){
                if(cnt[k] == 0) continue;
                
                long long tmp = 100*i + 10*j + k;
                if(tmp % 8 == 0){
                    printf("Yes\n");
                    return 0;
                }
            }
            cnt[j]++;
        }
        cnt[i]++;
    }

    printf("No\n");
    return 0;
}