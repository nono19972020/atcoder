#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    string s;
    cin >> s;

    vector<long long> sum_east(n+1, 0);
    vector<long long> sum_west(n+1, 0);
    for(long long i = 0; i < n; i++){
        if(s[i] == 'E'){
            sum_east[i+1] = sum_east[i] + 1;
            sum_west[i+1] = sum_west[i];
        }
        else{
            sum_east[i+1] = sum_east[i];
            sum_west[i+1] = sum_west[i] + 1;
        }
    }

    long long minv = n;
    for(long long i = 0; i < n; i++){
        minv = min(minv, sum_west[i] + sum_east[n] - sum_east[i+1]);
    }

    cout << minv << endl;
    return 0;
}