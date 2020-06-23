#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

long long f(long long x, long long y){
    string s = to_string(x);
    string t = to_string(y);

    return max(s.size(), t.size());
}

int main(){
    long long n;
    cin >> n;

    long long minv = 100;
    for(long long a = 1; a <= sqrt(n); a++){
        if(n % a == 0){
            long long b = n/a;
            minv = min(minv, f(a, b));
        }
    }

    cout << minv << endl;
    return 0;
    
}