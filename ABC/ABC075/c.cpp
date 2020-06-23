#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long n, m;
bool visit[50];
vector<vector<long long> > G(50);

void visit_init(){
    for(long long i = 0; i < 50; i++){
        visit[i] = false;
    }
}

bool visit_true(){
    bool flag = true;
    for(long long i = 0; i < n; i++){
        if(visit[i] == false){
            flag = false;
            break;
        }
    }
    if(flag == true){
        return true;
    }
    else{
        return false;
    }
}


void dfs(long long x, long long break_a, long long break_b){
    if(visit[x] == true){
        return;
    }

    visit[x] = true;

    for(long long v = 0; v < G[x].size(); v++){
        if((x == break_a and G[x][v] == break_b) || (x == break_b and G[x][v] == break_a)){
            continue;
        }
        dfs(G[x][v], break_a, break_b);
    }
}

int main(){
    
    cin >> n >> m;

    vector<pair<long long, long long> >v;

    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
        v.push_back(make_pair(a, b));
    }

    long long count = 0;
    for(long long i = 0; i < v.size(); i++){
        visit_init();
        dfs(0, v[i].first, v[i].second);
        if(visit_true() == false){
            count++;
        }
    }

    cout << count << endl;
    return 0;

}
