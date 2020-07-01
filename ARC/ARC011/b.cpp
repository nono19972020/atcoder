#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    string word[n];


    map<char, long long> T;
    T['b'] = 1;
    T['B'] = 1;
    T['c'] = 1;
    T['C'] = 1;
    T['d'] = 2;
    T['D'] = 2;
    T['w'] = 2;
    T['W'] = 2;
    T['t'] = 3;
    T['T'] = 3;
    T['j'] = 3;
    T['J'] = 3;
    T['f'] = 4;
    T['F'] = 4;
    T['q'] = 4;
    T['Q'] = 4;
    T['l'] = 5;
    T['L'] = 5;
    T['v'] = 5;
    T['V'] = 5;
    T['s'] = 6;
    T['S'] = 6;
    T['x'] = 6;
    T['X'] = 6;
    T['p'] = 7;
    T['P'] = 7;
    T['m'] = 7;
    T['M'] = 7;
    T['h'] = 8;
    T['H'] = 8;
    T['k'] = 8;
    T['K'] = 8;
    T['n'] = 9;
    T['N'] = 9;
    T['g'] = 9;
    T['G'] = 9;
    T['z'] = 0;
    T['Z'] = 0;
    T['r'] = 0;
    T['R'] = 0;


    for(long long i = 0; i < n; i++){
        cin >> word[i];
    }

    vector<string> ans;
    for(long long i = 0; i < n; i++){
        string s;
        for(long long j = 0; j < word[i].size(); j++){
            if(T.find(word[i][j]) != T.end()){
                s.push_back(T[word[i][j]]+'0');
            }
        }
        if(s != ""){
            ans.push_back(s);
        }
    }

    for(long long i = 0; i < ans.size(); i++){
        if(i == ans.size()-1){
            printf("%s", ans[i].c_str());
            continue;
        }
        printf("%s ", ans[i].c_str());
    }
    printf("\n");
    return 0;
}