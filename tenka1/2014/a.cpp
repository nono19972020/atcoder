#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    set<string> T;

    for(long long i = 1; i <= 1000; i++){
        string s = to_string(i);
        T.insert(s);
    }

    set<string>::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        cout << *it << endl;
    }
    return 0;
}