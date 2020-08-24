#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans;
    for(long long i = 0; i < s.size(); i++){
        if(i == 0){
            if(isupper(s[i]) == 0) ans += toupper(s[i]);
            else ans += s[i];
        }
        else{
            if(isupper(s[i]) != 0) ans += tolower(s[i]);
            else ans += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}