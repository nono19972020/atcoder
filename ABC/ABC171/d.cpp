#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;
    map<long long, long long> T;

    long long sum = 0;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        sum += a;
        if(T.find(a) == T.end()){
            T[a] = 1;
        }
        else{
            T[a]++;
        }
    }

    long long q;
    cin >> q;
    vector<long long> result(q);

    for(long long i = 0; i < q; i++){
        long long b, c;
        cin >> b >> c;
        if(T.find(b) == T.end()){
            result[i] = sum;
        }
        else{
            sum += (c-b)*T[b];
            
            if(T.find(c) == T.end()){
                T[c] = T[b];
            }
            else{
                T[c] += T[b];
            }

            T.erase(b);
            result[i] = sum;
        }
    }

    for(long long i = 0; i < q; i++){
        printf("%lld\n", result[i]);
    }
    return 0;

}