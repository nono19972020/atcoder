#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    string s;
    cin >> n;
    cin >> s;

    long long cnt_r = 0, cnt_g = 0, cnt_b = 0;

    for(long long i = 0;i < n; i++){
        if(s[i] == 'R') cnt_r++;
        else if(s[i] == 'G') cnt_g++;
        else if(s[i == 'B']) cnt_b++;
    }

    cout << cnt_r % 2 + cnt_g % 2 + cnt_b % 2 << endl;
    return 0;
}