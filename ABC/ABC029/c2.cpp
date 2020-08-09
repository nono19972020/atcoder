#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

long long n;
set<string> T;

void dfs(string s){
    if(s.size() > n) return;

    if(s.size() == n) T.insert(s);
    for(char c = 'a'; c <= 'c'; c++){
        string t = s + c;
        dfs(t);
    }
}

int main(){
    cin >> n;

    set<string>::iterator it;

    string s = "";    
    dfs(s);
    for(it = T.begin(); it != T.end(); it++){
        cout << *it << endl;
    }
    return 0;
}