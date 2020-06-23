#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    map<long long, long long> T;
    long long a;
    long long A[n];
    for(long long i = 0; i < n; i++){
        cin >> a;
        A[i] = a;
        if(T.find(a) == T.end()){
            T[a] = 1;
        }
        else{
            T[a] += 1;
        }
    }

    map<long long, long long>::iterator it;

    long long sum = 0;
    for(it = T.begin(); it != T.end(); it++){
        if(it->second >= 2){
            sum += it->second*(it->second-1)/2;
        }
    }
    
    for(long long i = 0; i < n; i++){
        long long ans;
        ans = sum - T[A[i]]*(T[A[i]]-1)/2;
        T[A[i]] -= 1;
        if(T[A[i]] >= 2){
            ans = ans + T[A[i]]*(T[A[i]]-1)/2;
        }
        
        printf("%lld\n", ans);
        T[A[i]] += 1;
        
    }

    return 0;

}