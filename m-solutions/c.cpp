#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++) cin >> a[i];

    long long sum = 0;
    for(long long i = 0; i < k; i++) sum += a[i];

    vector<long long> b(n ,0);

    b[k-1] = sum;
    for(long long i = 0; i < n; i++){
        if(i <= k-1) continue;

        sum -= a[i-k];
        sum += a[i];
        b[i] = sum;
    }

    vector<string> ans;
    for(long long i = k-1; i < n; i++){

        if(i + 1 < n and b[i] < b[i+1]) ans.push_back("Yes");
        else if(i + 1 < n and b[i] >= b[i+1]) ans.push_back("No");
    }

    for(long long i = 0; i < ans.size(); i++) cout << ans[i] << endl;

    return 0;
}