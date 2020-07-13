#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long f[50];
    f[0] = 1;
    f[1] = 1;
    for(long long i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }

    cout << f[n] << endl;
    return 0;
}