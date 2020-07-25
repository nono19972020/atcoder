#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);

    for(long long i = 0; i < n; i++) cin >> a[i];

    
    long long money = 1000;
    long long cnt = 0;
    long long num;
    for(long long i = 0; i < n; i++){
        if(i + 1 < n and a[i] < a[i+1]){
            num = money/a[i];
            cnt += num;
            money -= num*a[i];
        }
        else if(i + 1 < n and a[i] > a[i+1]){
            money += cnt*a[i];
            cnt = 0;
        }
    }

    cout << money + cnt*a[n-1] << endl;
    return 0;
}