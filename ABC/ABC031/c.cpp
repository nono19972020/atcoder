#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long max_point_t = -1e9;
    
    for(long long i = 0; i < n; i++){
        long long max_point_a = -1e9;
        //long long max_point_t = -1e9;
        long long point;
        for(long long j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            long long left = min(i, j);
            long long right = max(i, j);
            long long point_a = 0;
            long long point_t = 0;
            for(long long k = left; k <= right; k++){
                if((k-left)%2 != 0){
                    point_a += a[k];
                }
                else{
                    point_t += a[k];
                }
            }
            //printf("i %lld j %lld point_t %lld point_a %lld\n", i, j, point_t, point_a);
            if(max_point_a < point_a){
                max_point_a = point_a;
                //max_point_t = point_t;
                point = point_t;
                //printf("max_point_a %lld max_point_t %lld\n", max_point_a, max_point_t);

            }
        }
        if(max_point_t < point){
            max_point_t = point;
        }
    }

    cout << max_point_t << endl;
    return 0;
}