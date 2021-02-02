#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, w;
    cin >> n >> w;
    vector<long long> table(200001, 0);

    for(long long i = 0; i < n; i++){
        long long s, t, p;
        cin >> s >> t >> p;
        table[s] += p;
        table[t] -= p;
    }

    for(long long i = 0; i < 200001; i++){
        if(i > 0) table[i] += table[i-1];
    }
    for(long long i = 0; i < 200001; i++){
        if(table[i] > w){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}