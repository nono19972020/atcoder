#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

long long gcd(long long x, long long y){
    if(y == 0){
        return x;
    }

    return gcd(y, x%y);
}

int main(){
    long long n, m;
    cin >> n >> m;

    long long l = n*(m/gcd(n ,m));
    string s, t;
    cin >> s >> t;

    
    map<long long, char> ans;

   
    for(long long i = 0; i < n; i++){
        ans[i*(l/n)+1] = s[i];
    }


    bool flag = true;
    for(long long i = 0; i < m; i++){
        if(ans.find(i*(l/m)+1) != ans.end() and t[i] != ans[i*(l/m)+1]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        printf("%lld\n", l);
    }
    else{
        printf("-1\n");
    }

    return 0;
}