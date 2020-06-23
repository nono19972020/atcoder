#include <iostream>
#include <cstdio>
#include <map>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;
    map<string, long long> T;

    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        if(T.find(s) == T.end()){
            T[s] = 1;
        }
        else{
            T[s] += 1;
        }
    }

    map<string, long long>::iterator it;

    long long maxv = 0;
    for(it = T.begin(); it != T.end(); it++){
        if(maxv < it->second){
            maxv = it->second;
        }
    }

    set<string> S;
    for(it = T.begin(); it != T.end(); it++){
        if(maxv == it->second){
            S.insert(it->first);
        }
    }

    set<string>::iterator it2;

    for(it2 = S.begin(); it2 != S.end(); it2++){
        cout << *it2 << endl;
    }

    return 0;
}