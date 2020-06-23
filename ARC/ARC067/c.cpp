#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

long long mod = 1e9+7;

int main(){
    long long n;
    cin >> n;

    map <long long, long long> T;

    for(long long now = n; now >= 1; now--){
        long long num = now;

        for(long long i = 2; i*i <= now; i++){
            if(num % i != 0){
                continue;
            }
            
            while(num % i == 0){
                if(T.find(i) == T.end()){
                    T[i] = 1;
                    num /= i;
                }
                else{
                    T[i]++;
                    num /= i;
                }
            }
        }
        if(num != 1){
            if(T.find(num) == T.end()){
                T[num] = 1;
            }
            else{
                T[num]++;
            }
        }
        
    }

    map<long long, long long>::iterator it;
    long long ans = 1;
    for(it = T.begin(); it != T.end(); it++){
        ans *= (it->second+1)%mod;
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}