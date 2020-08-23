#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++) cin >> a[i];

    long long maxv = a[0];
    long long ans = 0;
    for(long long i = 0; i < n; i++){
        if(maxv > a[i]){
            ans += maxv - a[i];
        }
        else maxv = a[i];
    }

    cout << ans << endl;
    return 0;
}