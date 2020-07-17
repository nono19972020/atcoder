#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long h[n];
    for(long long i = 0; i < n; i++){
        cin >> h[i];
    }

    long long ans = 0;
    for(long long mid = 0; mid < n; mid++){
        if(mid == 0 || mid == n-1){
            if(mid == 0){
                long long r = 0;
                while(h[r] > h[r+1] and r + 1 < n) r++;
                ans = max(ans, r - mid + 1);
            }
            else{
                long long l = mid;
                while(h[l-1] < h[l] and l >= 1) l--;
                ans = max(ans, mid - l + 1);
            }
        }
        else if(h[mid-1] < h[mid] and h[mid] > h[mid+1]){
            long long l = mid, r = mid;
            while(h[l-1] < h[l] and l >= 1)l--;
            while(h[r] > h[r+1] and r + 1 < n) r++;
            ans = max(ans, r - l + 1);
        }
    }

    cout << ans << endl;
    return 0;
}