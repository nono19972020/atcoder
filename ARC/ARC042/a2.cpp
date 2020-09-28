#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<bool> unused(n, true);
    vector<long long> write(m);
    for(long long i = 0; i < m; i++){
        long long a;
        cin >> a;
        a--;
        unused[a] = false;
        write[i] = a;
    }

    vector<long long> ans;
    set<long long> T;

    for(long long i = m-1; i >= 0; i--){
        if(T.find(write[i]) == T.end()) {
            ans.push_back(write[i]+1);
            T.insert(write[i]);
        }
    }
    for(long long i = 0; i < n; i++){
        if(unused[i] == true) ans.push_back(i+1);
    }

    for(long long i = 0; i < n; i++) printf("%lld\n", ans[i]);

    return 0;
}