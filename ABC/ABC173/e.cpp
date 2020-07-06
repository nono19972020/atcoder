#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long mod = 1e9+7;

bool compair(long long a, long long b){
    return abs(a) > abs(b);
}

int main(){
    long long n, k;
    cin >> n >> k;
    
    vector<long long> a(n);
    printf("a\n");
    long long maxv = -1e9;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(maxv < a[i]) maxv = a[i];
        printf("input \n");
    }

    sort(a.begin(), a.end(), compair);

    long long sum = 1;

    if(n == k){
        for(long long i = 0; i < n; i++){
            if(a[i] < 0){
                sum = sum*((a[i]+mod)%mod);
                sum = sum%mod;
            }
            else{
                sum = sum*(a[i]%mod);
                sum = sum%mod;
            } 
        }
        printf("%lld\n", sum);
        return 0;
    }

    if(maxv < 0 and k % 2 != 0){
        for(long long i = n-1; i >= n-k; i--){
            sum = sum*((a[i]+mod)%mod);
            sum = sum%mod;
        }
        printf("%lld\n", sum);
        return 0;
    }

    long long count = 0;
    for(long long i = 0; i < k; i++){
        if(a[i] < 0){
            count++;
            sum = sum*((a[i]+mod)%mod);
            sum = sum % mod;
        }
        else{
            sum = sum *(a[i]%mod);
            sum = sum % mod;
        }
    }

    if(count % 2 == 0){
        cout << sum << endl;
        return 0;
    }
    //負の数を奇数回掛けた場合

    //取り除きたい数
    long long min_plus = -1;
    long long min_minus = 1;//絶対値が最小

    for(long long i = 0; i < k; i++){
        if(a[i] >= 0) min_plus = a[i];
        else min_minus = a[i];
    }

    //追加したい数
    long long max_plus = -1;
    long long max_minus = 1;//絶対値が最大

    for(long long i = k; i < n; i++){
        if(a[i] >= 0 and max_plus == -1) max_plus = a[i];
        else if(a[i] < 0 and max_minus == 1) max_minus = a[i];
    }

    long long sum1, sum2;

    if(min_plus == -1){
        sum2 = (sum/min_minus)*max_plus;
        sum2 = sum2%mod;

        cout << sum2 << endl;
    }
    else if(min_minus == 1){
        sum1 = (sum/min_plus)*max_minus;
        sum1 = sum1%mod;
        cout << sum1 << endl;
    }
    else{
        sum1 = (sum/min_plus)*max_minus;
        sum2 = (sum/min_minus)*max_plus;
        sum1 = sum1%mod;
        sum2 = sum2%mod;

        cout << max(sum1, sum2) << endl;
    }

    return 0;
}