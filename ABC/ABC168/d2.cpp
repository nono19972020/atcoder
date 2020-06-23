#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<vector<long long> > path(n);

    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        path[a-1].push_back(b-1);
        path[b-1].push_back(a-1);
    }

    queue<long long> q;
    vector<long long> distance(n, -1);
    vector<long long> result(n);
    distance[0] = 0;
    q.push(0);

    while(!q.empty()){
        long long top = q.front();
        q.pop();

        for(long long next = 0; next < path[top].size(); next++){
            if(distance[path[top][next]] == -1){
                q.push(path[top][next]);
                result[path[top][next]] = top;
                distance[path[top][next]] = distance[top] + 1;
            }
        }
    }

    printf("Yes\n");

    for(long long i = 1; i < n; i++){
        printf("%lld\n", result[i]+1);
    }

    return 0;

}