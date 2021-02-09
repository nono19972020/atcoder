#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long keta(long long n){
    string s = to_string(n);
    long long sum = 0;
    for(long long i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans = max(keta(a), keta(b));
    cout << ans << endl;
    return 0;
}