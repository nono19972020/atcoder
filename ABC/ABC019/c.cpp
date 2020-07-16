#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

long long divid(long long n){
    while(n % 2 == 0){
        n /= 2;
    }
    return n;
}
int main(){
    long long n;
    cin >> n;

    set<long long> T;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        T.insert(divid(a));
    }
    cout << T.size() << endl;
    return 0;
}