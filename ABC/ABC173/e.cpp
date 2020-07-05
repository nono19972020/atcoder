#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

long long mod = 1e9+7;

bool compair(pair<long long, long long> a, pair<long long, long long> b){
    return a.first > b.first;
}

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<long long>());

    vector<pair<long long, long> > b;

    long long i = 0;

    while(i < n){
        if(a[i] >= 0){
            b.push_back(make_pair(a[i], 1));
        }
        else{
            if(i == n-1){
                b.push_back(make_pair(a[i], 1));
            }
            else{
                if(i + 1 < n){
                    b.push_back(make_pair(a[i]*a[i+1], 2));
                }
                i++;
            }
        }
        i++;
    }

    sort(b.begin(), b.end(), compair);

    long long j = 0;

    long long count = 0;
    long long sum = 1;
    while(1){
        if(count == k){
            break;
        }

        
        if(b[j].second == 1){
            sum = sum * (b[j].first%mod);
            sum = sum % mod;
            count++;
        }
        else{
            sum = sum * (b[j].first%mod);
            sum = sum % mod;
            count = count + 2;
        }
    }

    cout << sum << endl;

    return 0;
}