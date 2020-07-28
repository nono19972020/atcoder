#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long INF = 1e15;
vector<vector<long long> > d(10, vector<long long>(10 , INF));

void warshall_floyd(long long n){
    for(long long k = 0;k < n;k++){ /*経由する頂点*/
        for(long long i = 0;i < n;i++){ /*始点*/
            for(long long j = 0;j < n;j++){ /*終点*/
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]); /*距離*/
            }
        }
    }
}

int main(){
    long long n, m;
    cin >> n >> m;

    for(long long i = 0; i < 10; i++) d[i][i] = 0;

    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        d[a-1][b-1] = 1;
        d[b-1][a-1] = 1;
    }

    warshall_floyd(n);

    vector<long long> ans(n ,0);

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            if( d[i][j] == 2) ans[i]++;
        }
    }

    for(long long i = 0; i < n; i++) printf("%lld\n", ans[i]);
    return 0;
}