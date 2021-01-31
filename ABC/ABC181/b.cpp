#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long cnt = 0;

    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        cnt += (a + b)*(b - a + 1) /2;
    }

    cout << cnt << endl;
    return 0;
}