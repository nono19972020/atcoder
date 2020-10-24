#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int main(){
    long long n;
    cin >> n;

    long long a, b;

    long long cnt_3 = 1, cnt_5 = 1;
    bool flag = false;
    for(a = 1; a <= 1000; a++){
        cnt_3 *= 3;
        cnt_5 = 1;
        if(cnt_3 > 1e18 || cnt_3 > n) break;  
        
        for(b = 1; b <= 1000; b++){
            cnt_5 *= 5;
            if(cnt_5 > 1e18 || cnt_5 > n){
                break;
            }

            if(cnt_3 + cnt_5 == n){
                //printf("cnt_3 %lld cnt_5 %lld\n", cnt_3, cnt_5);
                flag = true;
                break;
            }
        }
       
        if(flag == true) break;
    }

    if(flag == true) printf("%lld %lld\n", a, b);
    else printf("-1\n");

    return 0;
}