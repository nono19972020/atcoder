#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<string> v;

    for(long long i = 0; i < 15; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());

    cout << v[6] << endl;
    return 0;
}