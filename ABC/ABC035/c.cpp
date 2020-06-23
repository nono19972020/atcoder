#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;

    vector<long long> turn(n, 0);

    for(long long i = 0; i < q; i++){
        long long l , r;
        cin >> l >> r;
        l = l-1;
        r = r-1;
        turn[l]++;
        if(r+1 < n){
            turn[r+1]--;
        }
    }

    for(long long i = 1; i < n; i++){
        turn[i] += turn[i-1];
    }

    string ans;

    for(long long i = 0; i < n; i++){
        if(turn[i] % 2 == 0){
            ans.push_back('0');
        }
        else{
            ans.push_back('1');
        }
    }

    cout << ans << endl;

    return 0;
}