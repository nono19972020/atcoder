#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n, p;
    cin >> n >> p;

    map<long long, long long> T;
    long long num = p;

    for(long long i = 2; i * i <= num; i++){
        if(num % i != 0) continue;

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
    if(num != 1) T[num] = 1;

    map<long long, long long>::iterator it;
    long long ans = 1;
    for(it = T.begin(); it != T.end(); it++){
        if(it->second >= n){
            long long m = it->second / n;
            for(long long i = 0; i < m; i++){
                ans *= it->first;
            }
        }
    }
    cout << ans << endl;
    return 0;
}