#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    long long d;
    cin >> n >> d;

    long long cnt = 0;
    for(long long i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        if(x*x + y*y <= d*d) cnt++;
    }
    cout << cnt << endl;
    return 0;
}