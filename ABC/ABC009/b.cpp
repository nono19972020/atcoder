#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;
    set<long long> T;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        T.insert(a);
    }

    set<long long>::iterator it;
    it = T.end();
    it--;
    long long maxv = *it;
    long long maxv2;
    
    for(it = T.begin(); it != T.end(); it++){
        if(*it < maxv){
            maxv2 = *it;
        }
    }

    cout << maxv2 << endl;
    return 0;
    
}