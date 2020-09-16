#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;
    vector<long long> table;
    table.assign(n, 0);

    for(long long i = 0; i < q; i++){
        long long l, r;
        cin >> l >> r;
        l--, r--;
        table[l]++;
        if(r+1 < n) table[r+1]--;
    }

    for(long long i = 0; i < n; i++){
        if(i > 0) table[i] += table[i-1];
    }

    for(long long i = 0; i < n ; i++){
        if(table[i] % 2 == 0) printf("0");
        else printf("1");
    }
    printf("\n");
    return 0;
}