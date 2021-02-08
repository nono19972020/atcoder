#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    string s;
    cin >> n;
    cin >> s;
    if(n % 2 == 1) printf("-1\n");
    else{
        string s1, s2;
        s1 = s.substr(0, n / 2);
        s2 = s.substr(n/2);
        long long ans = 0;
        for(long long i = 0; i < n/2; i++){
            if(s1[i] != s2[i]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}