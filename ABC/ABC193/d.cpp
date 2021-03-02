#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long k;
    cin >> k;
    string s, t;
    cin >> s >> t;

    vector<long long> cnt_t(10, 0);
    vector<long long> cnt_a(10, 0);
    for(long long i = 0; i < 4; i++){
        cnt_t[s[i] - '0']++;
        cnt_a[t[i] - '0']++;
    }
    long long sum = 0;
    for(long long i = 0; i < 10; i++){
        sum += cnt_t[i];
        sum += cnt_a[i];
    }

    long double ret = 9 * k - sum;

    long long cnt = 0;
    for(long long x = 1; x <= 9; x++){
        for(long long y = 1; y <= 9; y++){
            long long point_t = 0, point_a = 0;

            if(x == y){
                if(cnt_t[x] + cnt_a[y] + 2 > k) continue;
                
                for(long long i = 1; i <= 9; i++){
                    if(i != x){
                        point_t += i * ((long long) pow(10, cnt_t[i]));
                        point_a += i * ((long long) pow(10, cnt_a[i]));
                    }
                    else{
                        point_t += i * ((long long) pow(10, cnt_t[i] + 1));
                        point_a += i * ((long long) pow(10, cnt_a[i] + 1));
                    }
                }
            }
            else{
                if(cnt_t[x] + cnt_a[x] + 1 > k || cnt_a[y] + cnt_t[y] + 1 > k) continue;

                for(long long i = 1; i <= 9; i++){
                    if(i != x) point_t += i *  ((long long) pow(10, cnt_t[i]));
                    else point_t += i * ((long long) pow(10, cnt_t[i] + 1));

                    if(i != y) point_a += i * ((long long) pow(10, cnt_a[i]));
                    else point_a += i * ((long long) pow(10, cnt_a[i] + 1));
                }
            }

            if(point_t > point_a) {
                //printf("x %lld y %lld\n", x, y);
                if(x == y) cnt += (k - cnt_t[x] - cnt_a[y]) * (k - cnt_t[x] - cnt_a[y] - 1);
                else cnt += (k - cnt_t[x] - cnt_a[x]) * (k - cnt_a[y]- cnt_t[y]); 
            }
        }
    }

    //printf("cnt %lld\n", cnt);
    //printf("ret %Lf\n", ret);
    long double ans = (long double)  cnt / (ret * (ret - 1.0L));

    printf("%.10Lf\n", ans);
    return 0;
}