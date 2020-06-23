#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;


int main(){
    long long n, m;
    cin >> n >> m;
   
   vector<vector<long long> > v(n+1);
    

    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);

    }

    
    vector<long long> distance(n+1, -1);
    vector<long long> front(n+1);
    distance[1] = 0;

    queue<long long> q;
    long long top;
    q.push(1);

    while(!q.empty()){
        top = q.front();
        q.pop();
        
        for(long long i = 0; i < v[top].size(); i++){
            if(distance[v[top][i]] != -1){
                continue;
            }
            q.push(v[top][i]);
            distance[v[top][i]] = distance[top] + 1;
            front[v[top][i]] = top;
        }
    }

    printf("Yes\n");
    for(long long i = 2; i <= n; i++){
       printf("%lld\n", front[i]);
    }
    
    return 0;
}