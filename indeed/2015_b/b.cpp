#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    long long cnt = 0;
    long long n = s.size();

    for(long long i = 0; i < n; i++){
        if(s == t){
            printf("%lld\n", cnt);
            return 0;
        }

        s = s[n-1] + s.substr(0, n-1);
        cnt++;
    }
    printf("-1\n");
    return 0;
}