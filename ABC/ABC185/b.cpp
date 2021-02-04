#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m, t;
    cin >> n >> m >> t;

    long long time = 0;
    long long cnt = n;
    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        cnt -= (a - time);
        time = b;

        if(cnt <= 0){
            printf("No\n");
            return 0;
        }
        cnt += (b - a);
        if(cnt >= n) cnt = n;

        if(i == m-1) cnt -= (t - b);
        
    }

    if(cnt <= 0) printf("No\n");
    else printf("Yes\n");
    
    return 0;
}