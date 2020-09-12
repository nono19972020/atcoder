#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans;
    long long cnt;
    if(a % 2 == 0 and b % 2 == 0){
        cnt = (b-2-a)/2 + 1;
        if(cnt % 2 == 0) ans = 0 ^ b;
        else ans = 1 ^ b;
    }
    else if(a % 2 == 0 and b % 2 != 0){
        cnt = (b-1-a) /2 + 1;
        if(cnt % 2 == 0) ans = 0;
        else ans = 1;
    }
    else if(a % 2 != 0 and b % 2 == 0){
        cnt = (b-2-(a+1))/2 + 1;
        if(cnt % 2 == 0) ans = a ^ b;
        else ans = a ^ 1 ^ b;
    }
    else if(a % 2 != 0 and b % 2 != 0){
        cnt = (b-1-(a+1))/2 + 1;
        if(cnt % 2 == 0) ans = a;
        else ans = a ^ 1;
    }
    cout << ans << endl;
    return 0;
}