#include <iostream>
#include <cstdio>
using namespace std;

long long a, b, x;

long long keta(long long n){
    string s = to_string(n);
    long long dn = s.size();

    return dn;
}

long long f(long long n){
    return a*n + b*keta(n);
}

int main(){
    
    cin >> a >> b >> x;

    long long left = 0;
    long long right = 1e9+1;

    long long mid;


    while(right - left > 1){
        mid = (right+left)/2;
        if(f(mid) > x){
            right = mid;
        }
        else{
            left = mid;
        }
    }

    cout << left << endl;
    return 0;
}