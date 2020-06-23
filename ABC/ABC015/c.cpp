#include <iostream>
#include <cstdio>

using namespace std;
long long n, k;
long long t[5][5];
bool flag = false;

void dfs(long long numQ, int value){
    if(numQ == n){
        if(value == 0){
            flag = true;
        }
        return;
    }

    for(long long i = 0; i < k; i++){
        dfs(numQ+1, value^t[numQ][i]);
    }
    
}

int main(){
    cin >> n >> k;

    for(long long y = 0; y < n; y++){
        for(long long x = 0; x < k; x++){
            cin >> t[y][x];
        }
    }
    dfs(0, 0);
    
    if(flag == true){
        printf("Found\n");
    }
    else{
        printf("Nothing\n");
    }

    return 0;
}