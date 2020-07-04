#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, r;
    cin >> n >> r;
    string s;
    cin >> s;

    long long count_o = 0;
    long long right = -1;
    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'o'){
            count_o++;
        }
        else{
            right = i;
        }
    }

    if(right == -1){
        cout << 0 << endl;
        return 0;
    }

    long long ans = 0;

    for(long long i = 0; i < right-r+1; i++){
        if(s[i] == '.'){
            ans++;
            for(long long j = 0; j < r; j++){
                s[i+j] = 'o';
            }
        }
        ans++;
    }
    ans++;
    cout << ans << endl;
    return 0;
}