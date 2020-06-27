#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    long long count = 0;
    for(long long i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}