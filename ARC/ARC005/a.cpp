#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);
   
    long long cnt = 0;
    string s2[n];
    for(long long i = 0; i < s.size(); i++){
        if(s[i] != ' ' and s[i] != '.'){
            s2[cnt].push_back(s[i]);
        }
        else if(s[i] == ' '){
            cnt++;
        }
    }

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        if(s2[i] == "TAKAHASHIKUN") ans++;
        else if(s2[i] == "Takahashikun") ans++;
        else if(s2[i] == "takahashikun") ans++;
    }
    cout << ans << endl;
    return 0;
}