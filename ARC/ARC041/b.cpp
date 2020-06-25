#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int main(){
    long long n, m;
    cin >> n >> m;

    vector<vector<long long > > b(n, vector<long long>(m));

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            char c;
            cin >> c;
            b[i][j] = c - '0';
        }
    }

    vector<vector<long long > > a(n, vector<long long>(m, 0));

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            if((i == 0 and j == 0) || (i == n-1 and j == 0) || (i == 0 and j == m-1) || (i == n-1 and j == m-1)){
                continue;
            }
            if(b[i][j] > 0){
                a[i+1][j] += b[i][j];
                b[i+2][j] -= b[i][j];
                b[i+1][j-1] -= b[i][j];
                b[i+1][j+1] -= b[i][j];
            }
        }
    }

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            printf("%lld", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}