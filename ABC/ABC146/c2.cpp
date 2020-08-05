#include <iostream>
#include <cstdio>
using namespace std;

long long a, b, x;

long long keta(long long n){
    string s;
    s = to_string(n);
    return (long long)s.size();
}

long long money(long long n){
    return a*n + b*keta(n);
}

int main(){
    cin >> a >> b >> x;

    long long right = 1e9+1;
    long long left = 0;

    while(right - left > 1){
        long long mid = (left + right)/2;

        if(money(mid) <= x) left = mid;
        else right = mid;
    }
    //rintf("left %lld right %lld\n", left, right);
    cout << left << endl;
    return 0;
}