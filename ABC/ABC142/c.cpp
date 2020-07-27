#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    vector<long long> a(n);

    for(long long i = 0; i < n; i++) cin >> a[i];


    vector<long long> ans(n);

    for(long long i = 0; i < n; i++){
        ans[a[i]-1] = i+1; 
    }

    for(long long i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}