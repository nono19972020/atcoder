#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long a, b ,c, d;
    cin >> a >> b >> c >> d;

    string ans;

    ans += s.substr(0, a);
    ans += '"';
    ans += s.substr(a, b-a);
    ans += '"';
    ans += s.substr(b, c-b);
    ans += '"';
    ans += s.substr(c, d-c);
    ans += '"';
    if(d <= s.size()-1) ans += s.substr(d);

    cout << ans << endl;
    return 0;
}