#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    string ans;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            ans = ans + '0';
        }
        else if(s[i] == '1'){
            ans = ans + '1';
        }
        else if(s[i] == 'B' and ans.size() == 0){
            continue;
        }
        else if(s[i] == 'B' and ans.size() != 0){
            ans.erase(ans.size()-1);
        }
    }

    cout << ans << endl;

    return 0;
}