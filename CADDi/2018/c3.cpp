#include <iostream>
#include <cstdio>
#include <vector>
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

    long long ans = 1;
    map<long long, long long>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        long long r = it->second / n;
        for(long long i = 0; i < r; i++){
            ans *= it->first;
        }
    }

    cout << ans << endl;
    return 0;
}