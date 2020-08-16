#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long n;
vector<vector<long long> > d(n, vector<long long>(n));

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
    
    cin >> n;
    
    vector<vector<long long> > a(n, vector<long long>(n));
    
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    d = a;

    warshall_floyd(n);

    if(d != a){
        printf("-1\n");
        return 0;
    }

    vector<vector<long long> > b(n, vector<long long>(n, 0));
    for(long long k = 0; k < n; k++){
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < n; j++){
                if(i != j and j != k and k != i and a[i][j] == a[i][k] + a[k][j]) b[i][j] = 1;
            }
        }
    }

    long long sum = 0;

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            if(b[i][j] == 0) sum += a[i][j];
        }
    }
    
    printf("%lld\n", sum/2);
    return 0;
}