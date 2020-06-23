#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;



int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<bool> dp(a[a.size()-1]+1, true);
    set<long long> unique;
    for(long long i = 0; i < n; i++){
        if(unique.find(a[i]) != unique.end()){
            dp[a[i]] = false;
        }

        for(long long j = 2*a[i]; j <= a[a.size()-1]; j += a[i]){
            dp[j] = false;
            
        }

        unique.insert(a[i]);

    }

    long long count = 0;
    for(long long i = 0; i < n; i++){
        if(dp[a[i]] == true){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}