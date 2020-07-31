#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    vector<long long> table(1000001, 0);
    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        table[a]++;
        table[b+1]--;
    }

    for(long long i = 0; i <= 1000000; i++){
        if(i > 0) table[i] += table[i-1];
    }

    long long maxv = 0;

    for(long long i = 0; i <= 1000000; i++) maxv = max(maxv, table[i]);
    
    cout << maxv << endl;
    return 0;
}