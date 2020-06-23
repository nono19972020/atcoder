#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long log_n = floor(log2(k));

    vector<vector <long long> > next(log_n+1, vector<long long>(n+1));

    for(long long i = 1; i <= n; i++){
        cin >> next[0][i];
    }

    for(int k = 0; k < log_n; k++){
        for(int i = 1; i <= n; i++){
            if(next[k][i] == -1){
                next[k+1][i] = -1;
            }
            else{
                next[k+1][i] = next[k][next[k][i]];//2^k乗先を求める
            }
        }
    }

    long long p = 1;
    //printf("log_n %lld\n", log_n);
    for(long long j = log_n; j >=0; --j){
        //printf("p %lld\n", p);
        //printf("j %lld\n", j);
        if(p == -1){
            break;
        }

        if((k >> j) & 1){
            //printf("bit p %lld\n", p);
            //printf("bit j %lld\n", j);
            p = next[j][p];
        }
    }

    printf("%lld\n", p);

    return 0;

}