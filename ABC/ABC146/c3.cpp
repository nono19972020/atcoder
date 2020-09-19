#include <iostream>
#include <cstdio>
using namespace std;

long long d(long long n){
    string s = to_string(n);
    return (long long) s.size();
}

int main(){
    long long a, b, x;
    cin >> a >> b >> x;

    long long left = 0;
    long long right = 1e9+1;

    while(right - left > 1){
        long long mid = (left + right)/2;
        if(x < a * mid + b * d(mid)) right = mid;
        else left = mid;
    }

    //printf("left %lld right %lld\n", left, right);

    cout << left << endl;
    return 0;
}