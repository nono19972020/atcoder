#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string t;
    t = "indeednow";
    sort(t.begin(), t.end());
    vector<string> ans;
    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if(s == t){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }

    for(long long i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}