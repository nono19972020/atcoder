#include <iostream>
#include <cstdio>
using namespace std;

long long keta(long long n){
    string s = to_string(n);
    long long sum = 0;
    for(long long i = 0; i < s.size(); i++) sum += s[i] - '0';

    return sum;
}

int main(){
    long long n;
    cin >> n;
    
    long long minv = 1e9;
    for(long long a = 1; a < n; a++){
        long long b = n - a;
        minv = min(minv, keta(a)+keta(b));
    }

    cout << minv << endl;
    return 0;
}