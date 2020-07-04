#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long f[n][5][2];
    long long p[n][11];

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 5; j++){
            for(long long k = 0; k < 2; k++){
                cin >> f[i][j][k];
            }
        }
    }

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 11; j++){
            cin >> p[i][j];
        }
    }

    long long j;
    long long k;
    bool open[10];
    long long maxv = -1e9;

    for(long long bit = 0; bit < (1 << 10); bit++){

        for(long long j = 0; j < 5; j++){
            for(long long k = 0; k < 2; k++){
                if(bit & (1 << (2*j + k))){
                    open[2*j+k] = true;
                }
                else{
                    open[2*j+k] = false;
                }
            }
        }

        bool ok = false;
        for(long long j = 0; j < 5; j++){
            for(long long k = 0; k < 2; k++){
                if(open[2*j+ k] == true){
                    ok = true;
                    break;
                }
            }
        }
        if(ok == false){
            continue;
        }
        

        long long cost = 0;
        for(long long i = 0; i < n; i++){
            long long count = 0;
            for(long long j = 0; j < 5; j++){
                for(long long k = 0; k < 2; k++){
                    if(f[i][j][k] == 1 and open[2*j+k] == true){
                        count++;
                    }
                }
            }
            cost += p[i][count];
        }
        maxv = max(maxv, cost);
    }
    
    cout << maxv << endl;

    return 0;
}