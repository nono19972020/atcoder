#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
   
    map<long long, long long> T;

    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(T.find(a[i]) == T.end()){
            T[a[i]] = 1;
        }
    }

    map<long long, long long>::iterator it;
    long long count = 0;
    for(it = T.begin(); it != T.end(); it++){
        T[it->first] = count;
        count++;
    }
 

    vector<long long> ans(n);
    for(long long i = 0; i < n ; i++){
        ans[i] = T[a[i]];
    }
    for(long long i = 0; i < n ; i++){
        cout << ans[i] << endl;
    }

    return 0;
}