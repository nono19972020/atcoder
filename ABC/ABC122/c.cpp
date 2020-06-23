#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;

    string s;
    cin >> s;
    
    long long counter[n];

    long long count = 0;
    long long i = 0;

    while(i < s.size()){
        if(s[i] == 'A' and s[i+1] == 'C'){
            counter[i] = count;
            count++;
            counter[i+1] = count;
        }
        else{
            counter[i] = count;
        }
        i++;
    }

    long long ans[q];
    for(long long j = 0; j < q; j++){
        long long l, r;
        cin >> l >> r;
        //printf("counter[r-1] %lld counter[l-1] %lld\n", counter[r-1], counter[l-1]);
        ans[j] = counter[r-1] - counter[l-1];
        //printf("%lld\n", ans[j]);
    }

    for(long long j = 0; j < q; j++){
        printf("%lld\n", ans[j]);
    }

    return 0;
}