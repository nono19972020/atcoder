#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char x;
    cin >> x;

    string s, ans;
    cin >> s;

    for(long long i = 0; i < s.size(); i++){
        if(s[i] != x) ans += s[i];
    }

    cout << ans << endl;
    return 0;
}