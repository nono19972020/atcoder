#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, long long> T;
    for(long long i = 0; i < s.size(); i++){
        if(T.find(s[i]) == T.end()){
            T[s[i]] = 1;
        }
        else{
            T[s[i]]++;
        }
    }

    long long count_odd = 0;

    map<char, long long>::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        if(it->second % 2 != 0){
            count_odd++;
        }
    }

    if(count_odd == 0){
        printf("%lu\n", s.size());
        return 0;
    }

    cout << 2*((s.size()-count_odd)/(2*count_odd))+1 << endl;

    return 0;
}