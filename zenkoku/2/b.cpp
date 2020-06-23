#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

long long mod = 998244353;
int main(){
    long long n;
    cin >> n;

    vector<long long> d(n);
    vector<long long> count(n, 0);

    for(long long i = 0; i < n; i++){
        cin >> d[i];
        if(i == 0){
            if(d[i] != 0){
                printf("0\n");
                return 0;
            }
            count[d[i]]++;
            continue;
        }

        if(d[i] == 0){
            printf("0\n");
            return 0;
        }
        count[d[i]]++;
    }

    bool flag = true;

    for(long long i = 0; i < count.size(); i++){
        if(flag == true and count[i] == 0){
            flag = false;
        }
        else if(flag == false and count[i] > 0){
            printf("0\n");
            return 0;
        }
    }

    long long ans = 1;

    for(long long i = 0; i < count.size()-1; i++){
        if(count[i] != 0 and count[i+1] != 0){
            for(long long j = 1; j <= count[i+1]; j++){
                ans *= count[i];
                ans %= mod;
            }
        }
    }

    cout << ans << endl;


}