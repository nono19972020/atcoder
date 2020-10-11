#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long cnt = 0;
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a > 0){
            cnt++;
            sum += a;
        }
    }

    long long ans = (sum + cnt - 1) / cnt;

    cout << ans << endl;
    return 0;
}