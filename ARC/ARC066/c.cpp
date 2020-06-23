#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

long long mod = 1e9+7;
int main(){
    long long n;
    cin >> n;
    long long a[n];
    map<long long, long long> T;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(T.find(a[i]) == T.end()){
            T[a[i]] = 1;
        }
        else{
            T[a[i]]++;
        }
    }

    map<long long, long long>::iterator it;
    bool flag = true;
    if(n % 2 != 0){
        for(it = T.begin(); it != T.end(); it++){
            if(it->first == 0){
                if(it->second != 1){
                    flag = false;
                    break;
                }
            }
            else{
                if(it->second != 2){
                    flag = false;
                    break;
                }
            }
        }
    }
    else{
        for(it = T.begin(); it != T.end(); it++){
            if(it->second != 2){
                flag = false;
                break;
            }
        }
    }

    if(flag == false){
        printf("0\n");
    }
    else{
        long long ans = 1;
        if(n % 2 == 0){
            for(long long i = 0; i < n/2; i++){
                ans *= 2;
                ans %= mod;
            }
        }
        else{
            for(long long i = 0; i < n/2; i++){
                ans *= 2;
                ans %= mod;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}