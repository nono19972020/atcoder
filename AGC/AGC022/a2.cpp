#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;



int main(){
    string s;
    cin >> s;

    if(s.size() < 26){
        for(char c = 'a'; c <= 'z'; c++){
            if(s.find(c) == string::npos){
                cout << s + c << endl;
                return 0;
            }
        }
    }

    string t;

    for(long long i = 25; i >= 0; i--){
        if(i == 25) t.push_back(s[i]);
        else{
            if(s[i] > s[i+1]) t.push_back(s[i]);
            else break;
        }
    }

    if(t.size() == 26) printf("-1\n");
    else{
        string ans = s.substr(0, 25-t.size());

        char c = s[25-t.size()];
        long long minv = 1e9;
        for(long long i = 0; i < t.size(); i++){
            if(c < t[i]) minv = min(minv, (long long)t[i]-c);
        }

        char c2;
        for(long long i = 0; i < t.size(); i++){
            if(c < t[i] and minv == t[i] - c){
                c2 = t[i];
                break;
            }
        }

        cout << ans + c2 << endl;
    }

    return 0;
}