#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long ans = (n-1 + k-1 -1)/(k-1);
    cout << ans << endl;
    return 0;
}