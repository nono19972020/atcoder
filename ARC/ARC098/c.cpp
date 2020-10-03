#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s;
    cin >> s;

    vector<long long> sum_w(n+1, 0);
    vector<long long> sum_e(n+1, 0);
    long long cnt_e = 0;

    for(long long i = 0; i < n; i++){
        if(s[i] == 'E'){
            cnt_e++;
            sum_e[i+1] = sum_e[i] + 1;
            sum_w[i+1] = sum_w[i];
        }
        else{
            sum_w[i+1] = sum_w[i] + 1;
            sum_e[i+1] = sum_e[i];
        }
    }

    long long minv = 1e9;
    for(long long i = 0; i < n; i++){
        if(s[i] == 'W'){
            minv = min(minv, sum_w[i+1] - 1 + cnt_e - sum_e[i+1]);
        }
        else{
            minv = min(minv, sum_w[i+1] + cnt_e - sum_e[i+1]);
        }
    }

    cout << minv << endl;
    return 0;
}