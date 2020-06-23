#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

long long mod = 1e9+7;

int main(){
    long long n, m;
    cin >> n >> m;

    set<long long> broken;
    for(long long i = 0; i < m; i++){
        long long a;
        cin >> a;
        broken.insert(a);
    }

    if(n == 1 and m == 1 and broken.find(1) != broken.end()){
        printf("0\n");
        return 0;
    }

    vector<long long> v(n+1);
    v[0] = 1;
    v[1] = 1;

    bool possible = true;
    for(long long i = 2; i <= n; i++){
        if(broken.find(i-1) != broken.end() and broken.find(i-2) != broken.end()){
            possible = false;
        }
        else if(broken.find(i-1) != broken.end()){
            v[i] = v[i-2]%mod;
        }
        else if(broken.find(i-2) != broken.end()){
            v[i] = v[i-1]%mod;
        }
        else{
            v[i] = (v[i-1]%mod + v[i-2]%mod)%mod;
        }
        
    }

    if(possible == false){
        printf("0\n");
    }
    else{
        printf("%lld\n", v[n]);
    }
    return 0;
}