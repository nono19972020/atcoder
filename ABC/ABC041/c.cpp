#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    map<long long, long long, greater<long long> >T;

    for(long long i = 1; i <= n; i++){
        long long length;
        cin >> length;
        T[length] = i;
    }

    map<long long, long long, greater<long long> >::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        printf("%lld\n",it->second);
    }

    return 0;

}