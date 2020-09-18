#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long t_pre = 0, x_pre = 0, y_pre = 0;

    for(long long i = 0; i < n; i++){
        long long t, x, y;
        cin >> t >> x >> y;
        long long delta_t = t - t_pre;
        long long dist = abs(x-x_pre) + abs(y-y_pre);

        if(dist % 2 == delta_t % 2 and dist <= delta_t){
            t_pre = t;
            x_pre = x;
            y_pre = y;
        }
        else{
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}