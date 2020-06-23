#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    long long score = 0;

    for(long long i = 0; i < n; i++){
        if(s[i] == 'L' and s[i-1] == 'L' and i-1 >= 0){
            score++;
        }

        if(s[i] == 'R' and s[i+1] == 'R' and i+1 < n){
            score++;
        }

    }

    cout << min(score+2*k, n-1) << endl;
    return 0;
}