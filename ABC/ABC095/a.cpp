#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long ans = 700;
    for(long long i = 0; i < 3; i++){
        if(s[i] == 'o') ans += 100;
    }

    cout << ans << endl;
    return 0;
}