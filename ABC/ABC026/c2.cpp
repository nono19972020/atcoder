#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long n;
vector<vector<long long> > buka(22, vector<long long>());
vector<long long> salary(22);

void dfs(long long v){
    if(buka[v].size() == 0){
        salary[v] = 1;
        return;
    }

    long long maxv = 0;
    long long minv = 1e12;
    for(auto next : buka[v]){
        dfs(next);
        maxv = max(maxv, salary[next]);
        minv = min(minv, salary[next]);
    }
    salary[v] = maxv + minv + 1;
    return;
}

int main(){
    cin >> n;
    
    for(long long i = 1; i < n; i++){
        long long b;
        cin >> b;
        buka[b-1].push_back(i);
    }

    dfs(0);
    cout << salary[0] << endl;
    return 0;
}