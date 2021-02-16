#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s, t;
    cin >> s;

    for(long long i = 0; i < n; i++){
        t.push_back(s[i]);
        while(t.size() >= 3 and t[t.size()-3] == 'f' and t[t.size()-2] == 'o' and t[t.size()-1] == 'x'){
            t = t.substr(0, t.size()-3);
        }
    }

    cout << t.size() << endl;
    return 0;
}