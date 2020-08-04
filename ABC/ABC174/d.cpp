#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string c;
    cin >> c;

    long long cnt_r = 0, cnt_w = 0;

    for(long long i = 0; i < n; i++){
        if(c[i] == 'R') cnt_r++;
        else cnt_w++;
    }

    long long change = 0;

    for(long long i = 0; i < cnt_r; i++){
        if(c[i] == 'W') change++;
    }
    cout << change << endl;
    return 0;
}