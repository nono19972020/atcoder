#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    long long ans = 0;

    for(long long i = 0; i < n; i++){
        if(a[i] == b[i] and b[i] == c[i] and c[i] == a[i]) continue;
        else if(a[i] != b[i] and b[i] != c[i] and c[i] != a[i]) ans += 2;
        else if(a[i] == b[i] || b[i] == c[i] || c[i] == a[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}