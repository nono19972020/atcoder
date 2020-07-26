#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long r, s, p;
    cin >> r >> s >> p;

    string t;
    cin >> t;

    string ans;
    long long cnt = 0;
    long long point = 0;
    for(long long i = 0; i < n; i++){
        if(t[i] == 'p'){
            ans.push_back('s');
            point = s;
        }
        else if(t[i] == 's'){
            ans.push_back('r');
            point = r;
        }
        else if(t[i] == 'r'){
            ans.push_back('p');
            point = p;
        }

        if(i-k >= 0 and ans[i-k] == ans[i]){
            ans[i] = ' ';
            point = 0;
        }
        cnt += point;
    }
    cout << cnt << endl;
    return 0;
}