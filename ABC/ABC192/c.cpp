#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long f(long long x){
    string s = to_string(x);
    string s_small = s;
    sort(s_small.begin(), s_small.end());

    string s_big = s_small;
    reverse(s_big.begin(), s_big.end());

    long long pos0 = s_small.rfind("0");
    if(pos0 != string::npos) s_small = s_small.substr(pos0+1);
    
    long long ans = stoll(s_big) - stoll(s_small);

    return ans;
}
int main(){
    long long n, k;
    cin >> n >> k;

    long long a = n;
    for(long long i = 0; i < k; i++){
        if(a == 0){
            printf("0\n");
            return 0;
        }
        a = f(a);
    }

    cout << a << endl;
    return 0;
}