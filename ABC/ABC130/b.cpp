#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;

    vector<long long> l(n);
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> l[i];
        sum += l[i];
    }

    vector<bool> jump(sum+1, false);

    long long now = 0;
    jump[now] = true;
    for(long long i = 0; i < n; i++){
        now += l[i];
        jump[now] = true;
    }

    long long cnt = 0;
    for(long long i = 0; i <= sum; i++){
        if(i <= x and jump[i] == true) cnt++;
    }

    cout << cnt << endl;
    return 0;
}