#include <iostream>
#include <cstdio>
using namespace std;


long long n;

void dfs(string s, char mx){
    if(s.size() == n){
        printf("%s\n", s.c_str());
        return;
    }
    else{
        for(char c = 'a'; c <= mx; c++){
            dfs(s+c, ((c == mx) ? (char)(mx + 1): mx));
        }
    }
}

int main(){
    cin >> n;
    dfs("", 'a');
    return 0;
}