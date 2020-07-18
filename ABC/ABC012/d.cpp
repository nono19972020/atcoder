#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

vector<vector<long long> > d(300, vector<long long>(300, 1e9));

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
    
    for(long long i = 0; i < n; i++){
        d[i][i] = 0;
    }

    for(long long i = 0; i < m; i++){
        long long a, b, t;
        cin >> a >> b >> t;

        d[a-1][b-1] = t;
        d[b-1][a-1] = t;
    }

    warshall_floyd(n);

    long long minv = 1e9;
    for(long long start = 0; start < n; start++){
        long long maxv = 0;

        for(long long goal = 0; goal < n; goal++){
            if(goal == start){
                continue;
            }
            maxv = max(maxv, d[start][goal]);
        }
        minv = min(minv, maxv);
    }

    cout << minv << endl;
    return 0;
}