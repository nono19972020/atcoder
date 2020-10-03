#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    string s;
    cin >> n >> s;

    vector<long long> cnt_a(n+1, 0);
    vector<long long> cnt_t(n+1, 0);
    vector<long long> cnt_c(n+1, 0);
    vector<long long> cnt_g(n+1, 0);

    for(long long i = 0; i < n; i++){
        if(s[i] == 'A'){
            cnt_a[i+1] = cnt_a[i] + 1;
            cnt_t[i+1] = cnt_t[i];
            cnt_c[i+1] = cnt_c[i];
            cnt_g[i+1] = cnt_g[i];
        }
        else if(s[i] == 'T'){
            cnt_a[i+1] = cnt_a[i];
            cnt_t[i+1] = cnt_t[i] + 1;
            cnt_c[i+1] = cnt_c[i];
            cnt_g[i+1] = cnt_g[i];
        }
        else if(s[i] == 'C'){
            cnt_a[i+1] = cnt_a[i];
            cnt_t[i+1] = cnt_t[i];
            cnt_c[i+1] = cnt_c[i] + 1;
            cnt_g[i+1] = cnt_g[i];
        }
        else if(s[i] == 'G'){
            cnt_a[i+1] = cnt_a[i];
            cnt_t[i+1] = cnt_t[i];
            cnt_c[i+1] = cnt_c[i];
            cnt_g[i+1] = cnt_g[i] + 1;
        }

    }

    /*for(long long i = 0; i <= n; i++){
        printf("a %lld t %lld c %lld g %lld\n", cnt_a[i], cnt_t[i], cnt_c[i], cnt_g[i]);
    }*/

    long long ans = 0;
    for(long long i = 0; i < n; i++){
        for(long long j = i+1; j < n; j++){
            long long sum_a = cnt_a[j+1] - cnt_a[i];
            long long sum_t = cnt_t[j+1] - cnt_t[i];
            long long sum_c = cnt_c[j+1] - cnt_c[i];
            long long sum_g = cnt_g[j+1] - cnt_g[i];

            if(sum_a == sum_t and sum_c == sum_g) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}