#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    string s;
    int n;

    cin >> s >> n;

    set<string> T;

    for(int i = 0; i + (n-1) <= s.size()-1; i++){
        T.insert(s.substr(i, n));
    }

    printf("%lu\n", T.size());

    return 0;
}