#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s;
    cin >> s;

    long long cnt_r = 0, cnt_g = 0, cnt_b = 0;

    for(long long i = 0; i < n; i++){
        if(s[i] == 'R') cnt_r++;
        else if(s[i] == 'G') cnt_g++;
        else cnt_b++;
    }

    long long cnt = 0;
    for(long long i = 0; i < n; i++){
        for(long long j = 1; i + 2*j < n; j++){
            if(s[i] != s[i+j] and s[i+j] != s[i+2*j] and s[i+2*j] != s[i]) cnt++;
        }
    }

    cout << cnt_r * cnt_g * cnt_b - cnt << endl;
    return 0;
}