#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> h(n);
    for(long long i = 0; i < n; i++) cin >> h[i];

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        bool flag = true;
        for(long long j = 0; j < i; j++){
            if(h[i] < h[j]){
                flag = false;
                break;
            }
        }
        if(flag == true) ans++;
    }

    cout << ans << endl;
    return 0;
}