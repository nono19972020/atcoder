#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    pair<pair<string, int>, int> p[110];

    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;

        p[i] = make_pair(make_pair(s, -x), i);
    }

    sort(p, p+n);

    for(int i = 0; i < n; i++){
        cout << p[i].second+1 << endl;
    }

    return 0;
}