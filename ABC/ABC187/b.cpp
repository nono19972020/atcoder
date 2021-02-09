#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    long double x[n], y[n];
    for(long long i = 0; i < n; i++) cin >> x[i] >> y[i];
    
    long long cnt = 0;
    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            if(x[i] - x[j] == 0) continue;
            long double a = (y[i] - y[j]) / (x[i] - x[j]);
            if(-1 <= a and a <= 1) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}