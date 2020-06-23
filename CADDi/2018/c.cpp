#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;

int main(){
    long long n, p;
    cin >> n >> p;

    long long num = p;
    map<long long, long long> T;

    for(long long i = 2; i*i <= p; i++){
        if(num % i != 0){
            continue;
        }

        long long count = 0;
        while(num % i == 0){
            count++;
            num /= i;
        }
        T[i] = count;
    }
    if(num != 1){
        T[num] = 1;
    }

    map<long long, long long>::iterator it;
    long long gcd = 1;
    for(it = T.begin(); it != T.end(); it++){
        //printf("it->first %lld it->second %lld\n", it->first, it->second);
        if(it->second >= n){
            gcd *= pow(it->first, it->second/n);
        }
    }

    cout << gcd << endl;

    return 0;
}

