#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int c;
    cin >> c;

    vector<int> s(3);
    vector<int> x(c);
    vector<int> y(c);
    vector<int> z(c);

    for(int i = 0; i < c; i++){
        cin >> s[0] >> s[1] >> s[2];
        sort(s.begin(), s.end());
        x[i] = s[0];
        y[i] = s[1];
        z[i] = s[2];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    sort(z.begin(), z.end());

    cout << x[c-1]*y[c-1]*z[c-1] << endl;

    return 0;
}