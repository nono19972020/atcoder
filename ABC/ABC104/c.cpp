#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int d, g;
    cin >> d >> g;

    int p[d], c[d];

    for(int i = 0; i < d; i++){
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;

    for(int mask = 0; mask < (1 << d); mask++){
        int s = 0, num = 0, rest_max = -1;
        for(int i = 0; i < d; i++){
            if(mask & (1 << i)){
                s = s + 100 * (i+1) * p[i] + c[i];
                num = num +  p[i];
            }else{
                rest_max = i;
            }
        }

        if(s < g){
            int s1 = 100 *(rest_max + 1);
            int need = (g - s + s1 - 1) / s1;
            if(need >= p[rest_max]){
                continue;
            }
            num = num + need;
        }
        ans = min(ans, num);
    }

    printf("%d\n", ans);

    return 0;

}