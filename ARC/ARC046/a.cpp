#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

bool check(long long n){
    string s = to_string(n);
    char top = s[0];

    for(long long i = 0; i < s.size(); i++){
        if(s[i] != top){
            return false;
        }
    }
    return true;
}
int main(){
    long long n;
    cin >> n;

    vector<long long> ans;

    for(long long i = 1; i < 1000000; i++){
        if(check(i) == true){
            ans.push_back(i);
        }
    }

    cout << ans[n-1] << endl;

    return 0;

}