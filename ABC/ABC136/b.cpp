#include <iostream>
#include <cstdio>
using namespace std;

long long keta(long long n){
    string s = to_string(n);
    return (long long) s.size();
}

int main(){
    long long n;
    cin >> n;
    long long cnt = 0;
    for(long long i = 1; i <= n; i++){
        if(keta(i) % 2 != 0) cnt++;
    }

    cout << cnt << endl;
    return 0;
}