#include <iostream>
#include <cstdio>
using namespace std;
#define unvisit 0
#define visiting 1
#define visited 2

int matrix[100][100] = {0};
bool visit[100] = {false};
int n, m;
int cycle;


void dfs(int u){
    if(visit[u] == false){
        visit[u] = true;
    }
    else if(visit[u] == true){
        //printf("visit true u %d\n", u);
        cycle = 1;
        return;
    }

    for(int v = 0; v < n; v++){
        if(matrix[u][v] == 1){
            matrix[v][u] = 0;//戻らないように道を削除
            dfs(v);
        }
    }

    return 0;
}

int main(){
    cin >> n >> m;

    int count = 0;

    
    for(int i = 0; i < m; i++){
        int v1, v2;
        cin >> v1 >> v2;
        matrix[v1-1][v2-1] = 1;
        matrix[v2-1][v1-1] = 1;
    }

    //printf("dfs 1 %d\n", dfs(1));

    for(int u = 0; u < n; u++){
        if(visit[u] == false){
            cycle = 0;
            dfs(u);
            count = count + 1;
            if(cycle == 1){
                count--;
            }
            
           //printf("count %d\n", count);
        }
    }

    

    printf("%d\n", count);

    return 0;
}