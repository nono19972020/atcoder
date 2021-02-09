#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, long long> T1, T2;

    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;

        if(s[0] != '!'){
            if(T1.find(s) == T1.end()) T1[s] = 1;
            else T1[s]++;
        }
        else{
            s = s.substr(1);
            if(T2.find(s) == T2.end()) T2[s] = 1;
            else T2[s]++;
        }
    }

    map<string, long long>::iterator it;
    for(it = T1.begin(); it != T1.end(); it++){
        if(T2.find(it->first) != T2.end()){
            cout << it->first << endl;
            return 0;
        }
    }

    printf("satisfiable\n");
    return 0;
}