#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    string s;
    cin >> s;

    long long cnt = 0;

    for(long long i = 0; i < n; i++){
        if(i+1 < n and s[i] != s[i+1]) cnt++;
    }

    cout << cnt + 1 << endl;
    return 0;
}