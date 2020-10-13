#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
   
    for(long long i = 0; i < n; i++) cin >> a[i];

    vector<bool> select(n, false);
    long long ans = 1e12;

    for(long long bit = 0; bit < (1 << n); bit++){
        long long cnt = 0;
      
        for(long long mask = 0; mask < n; mask++){
            if(bit & (1 << mask)){
                select[mask] = true;
                cnt++;
            }
            else select[mask] = false;
        }
        if(cnt != k) continue;

        long long height = a[0];
        long long money = 0;
        for(long long i = 1; i < n; i++){
            if(select[i] == true){
                if(a[i] <= height) {
                    money += height - a[i] + 1;
                    height++;
                }
            }
            height = max(height, a[i]);
        }

        ans = min(ans, money);
    }

    cout << ans << endl;
    return 0;
}