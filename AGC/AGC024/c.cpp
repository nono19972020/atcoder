#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    bool flag = true;
    for(long long i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] > i) flag = false;
    }

    if(flag == false){
        printf("-1\n");
        return 0;
    }

    for(long long i = 0; i < n; i++){
        if(i + 1 < n and a[i+1] - a[i] > 1){
            printf("-1\n");
            return 0;
        }
    }

    long long ans = 0;
    long long before = 0;
    for(long long i = n-1; i >= 0; i--){
        if(a[i] >= before) ans += a[i];

        before = a[i];
    }

    cout << ans << endl;
    return 0;
}