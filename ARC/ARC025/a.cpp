#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long sum = 0;

    long long d[7], j[7];

    for(long long i = 0; i < 7; i++) cin >> d[i];
    for(long long i = 0; i < 7; i++) cin >> j[i];

    for(long long i = 0; i < 7; i++) sum += max(d[i], j[i]);

    cout << sum << endl;
    return 0;
}