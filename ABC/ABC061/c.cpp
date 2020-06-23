#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    map<long long, long long> T;

    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;

        if(T.find(a) == T.end()){
            T[a] = b;
        }
        else{
            T[a] += b;
        }
    }

    map<long long, long long>::iterator it;

    long long count = 0;
    long long number;
    for(it = T.begin(); it != T.end(); it++){
        if(count <= k and k <= count + it->second){
            number = it->first;
            break;
        }
        count += it->second;
    }

    printf("%lld\n", number);

    return 0;
}