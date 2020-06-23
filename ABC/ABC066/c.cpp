#include <iostream>
#include <cstdio>
#include <list>
using namespace std; 

int main(){
    long long n;
    cin >> n;

    list<long long> a;

    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        if(i%2 == 0){
            a.push_back(x);
        }
        else{
            a.push_front(x);
        }

    }
    if(n % 2 == 1){
        a.reverse();
    }

    list<long long>::iterator it;
    for(it = a.begin(); it != a.end(); it++){
       printf("%lld ", *it);
    }
    printf("\n");

    return 0;
}