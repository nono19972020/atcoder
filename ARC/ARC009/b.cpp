#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int b[10];
    for(int i = 0; i < 10; i++){
        cin >> b[i];
    }

    int n;
    cin >> n;
    vector<pair<int, int> > v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        string s = to_string(a);
        string t;
        for(int j = 0; j < s.size(); j++){
            for(int k = 0; k < 10; k++){
               
                if(b[k] == s[j]-'0'){
                    t.push_back(k+'0');
                }
            }
        }
        v.push_back(make_pair(stoi(t), stoi(s)));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        //cout <<"t " << v[i].first << "s "<< v[i].second << endl;
        cout << v[i].second << endl;
    }
    return 0;
}