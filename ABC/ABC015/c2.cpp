#include <iostream>
#include <cstdio>
using namespace std;

long long n, k;
long long t[5][5];
bool found = false;

void dfs(long long i, long long sum){
    if(i == n){
        if(sum == 0) found = true;
        return;
    }

    for(long long j = 0; j < k; j++){
        dfs(i+1, sum^t[i][j]);
    }
}

int main(){
    
    cin >> n >> k;

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < k; j++){
            cin >> t[i][j];
        }
    }

    dfs(0, 0);

    if(found == true) printf("Found\n");
    else printf("Nothing\n");

    return 0;
}