#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, x, t;
    cin >> n >> x >> t;

    long long r = n /x;
    if(n % x != 0) r++;

    cout << r *t << endl;
    return 0;
}