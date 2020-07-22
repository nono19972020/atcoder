#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    map<char, long long> T;
    string s;
    cin >> s;

    for(long long i = 0; i < s.size(); i++){
        if(T.find(s[i]) == T.end()) T[s[i]] = 1;
        else T[s[i]]++;
    }

    printf("%lld %lld %lld %lld %lld %lld\n", T['A'], T['B'], T['C'], T['D'], T['E'], T['F']);
    return 0;
}