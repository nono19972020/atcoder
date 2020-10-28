#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string ans;
    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'L') ans.push_back('<');
        else if(s[i] == 'R') ans.push_back('>');
        else if(s[i] == 'A') ans.push_back('A');
        else if(s[i] == ' ') ans.push_back(' ');
    }

    cout << ans << endl;
    return 0;
}