#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<long long> write(m);
    vector<long long> ans;
    set<long long> unwrite;
    set<long long> q;

    for(long long i = 1; i <= n; i++){
        unwrite.insert(i);
    }

    for(long long i = 0; i < m; i++){
        cin >> write[i];
        unwrite.erase(write[i]);
    }

    

    for(long long i = m-1; i >= 0; i--){
       if(q.find(write[i]) == q.end()){
           ans.push_back(write[i]);
           q.insert(write[i]);
       }
    }

    set<long long>::iterator it;

    for(it = unwrite.begin(); it != unwrite.end(); it++){
        ans.push_back(*it);
    }

    for(long long i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}