#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long mod = 1e9 + 7;

int main(){
    long long s;
    cin >> s;

    vector<long long> a(s+1, 0);

    a[0] = 1;

    for(long long i = 0; i <= s; i++){
        if(i - 3 >= 0) a[i] = a[i-3] + a[i-1];
        a[i] %=  mod;
    }

    cout << a[s] << endl;
    return 0;
}