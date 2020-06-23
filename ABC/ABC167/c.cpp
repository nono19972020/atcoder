#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

long long n, m, x;
long long XX[12];

void init_XX(){
    for(long long i = 0; i < m; i++){
        XX[i] = 0;
    }
}


int main(){
    
    cin >> n >> m >> x;

    long long a[n][m];
    long long c[n];


    for(long long  y = 0; y < n; y++){
        for(long long x = 0; x < m+1; x++){
            if(x == 0){
                cin >> c[y];
            }
            else{
                cin >> a[y][x-1];
            }
        }
    }

    long long min_money = 1e9;
    long long cost = 0;

    bool flag = true;

    for(long long bit = 0; bit < (1 << n); bit++){
        flag = true;
        init_XX();
        cost = 0;

        for(long long y = 0; y < n; y++){
            if(bit & (1 << y)){
                cost = cost + c[y];
                for(long long i = 0; i < m; i++){
                    XX[i] = XX[i] + a[y][i];
                }
            }
        }

        for(long long i = 0; i < m; i++){
            if(XX[i] < x){
                flag = false;
                break;
            }
        }
        if(flag == true){
            min_money = min(cost, min_money);
        }
    }

    //printf("money %d\n", min_money);

    if(min_money != 1e9){
        printf("%lld\n", min_money);
    }
    else{
        printf("-1\n");
    }

    return 0;



}