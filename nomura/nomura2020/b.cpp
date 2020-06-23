#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string t;
    cin >> t;

    string ans = t;

    /*for(int i = 0; i < ans.size(); i++){
        if(i >= 1 and ans[i] == '?' and ans[i-1] == 'P'){
            ans[i] = 'D';
        }
    }*/

    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == '?'){
            ans[i] = 'D';
        }
    }

    //cout << "t " << t << endl;
    //cout << "ans " << ans << endl;
    cout << ans << endl;

    return 0;
}