#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n;

    map<long long, long long>T;
    cin >> n;

    long long a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(T.find(a) == T.end()){
            T[a] = 1;
        }
        else{
            T[a] += 1;
        }
    }

    map<long long, long long>::iterator it;

    long long sum;
    long long maxv = 0;

    for(it = T.begin(); it != T.end(); it++){
        sum = 0;
        sum += it->second;

        if(T.find(it->first-1) != T.end()){
            sum += T[it->first-1];
        }

        if(T.find(it->first+1) != T.end()){
            sum += T[it->first+1];
        }

        maxv = max(maxv, sum);
    }

    printf("%lld\n", maxv);

    return 0;

}