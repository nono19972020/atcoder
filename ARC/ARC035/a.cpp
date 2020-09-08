#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s_re;
    s_re = s;

    reverse(s_re.begin(), s_re.end());

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == s_re[i] || s[i] == '*' || s_re[i] == '*') continue;

        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    return 0;
}