#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int graph[12][12] = {0};////初期化
    int x, y;

    for(int i = 0; i < m; i++){
        cin >> x >> y;

        graph[y-1][x-1] = 1;
        graph[x-1][y-1] = 1;
    }

    int maxv = 0;

    for(int bit = 0; bit < (1 << n); bit++){
        vector<int> group;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                group.push_back(i);
            }
        }

        bool ok = true;

        for(int j = 0; j < group.size(); j++){
            for(int k = 0; k < group.size(); k++){
                if(j == k){
                    continue;
                }
                if(graph[group[j]][group[k]] != 1){
                    ok = false;
                }
            }
        }

        if(ok == true){
            int size = group.size();
            maxv = max(maxv, size);
        }
    }

    printf("%d\n", maxv);

    return 0;
}