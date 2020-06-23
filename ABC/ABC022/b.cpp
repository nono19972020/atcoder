#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    map<long long, long long> T;

    long long a;

    for(long long i = 0; i < n; i++){
        cin >> a;
        if(T.find(a) == T.end()){
            T[a] = 1;
        }
        else{
            T[a]++;
        }
    }

    map<long long, long long>::iterator it;

    long long sum = 0;
    for(it = T.begin(); it != T.end(); it++){
        sum += (it->second -1 );
    }

    printf("%lld\n", sum);

    return 0;

}