#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n , k;
    cin >> n >> k;

    vector<long long> a(n);
   
    for(long long i = 0; i < n; i++) cin >> a[i];
    
    long long ans = (n-1 + (k-1) - 1) /(k-1);

    cout << ans << endl;
    return 0;
}