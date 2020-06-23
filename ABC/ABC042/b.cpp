#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, l;
    cin >> n >> l;

    
    vector<string> v;

    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    string ans;
    for(long long i = 0; i < n; i++){
        ans += v[i];
    }

    cout << ans << endl;
    
    return 0;

}