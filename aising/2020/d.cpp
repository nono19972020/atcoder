#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s;
    cin >> s;

    long long original_pop_count = 0;

    for(long long i = 0; i < n; i++){
        if(s[i] == '1')original_pop_count++;
    }
    long long one_pop_count = original_pop_count - 1;
    long long zero_pop_count = original_pop_count + 1;

    long long one_mod = 0, zero_mod = 0;

    //n (modpopcount(n)+1),n (modpopcount(n)−1)を求める
    for(long long i = 0; i < n; i++){
        if(one_pop_count != 0) one_mod = (one_mod*2 + (s[i]-'0')) % one_pop_count;
        zero_mod = (zero_mod*2 + (s[i]-'0')) % zero_pop_count;
    }
    //printf("one_mod %lld zero_mod %lld\n", one_mod, zero_mod);

    //f
    vector<long long> f(220000, 0);
    vector<long long> pop_count(220000, 0);
    for(long long i = 1; i < 220000; i++){
        pop_count[i] = pop_count[i/2] + i % 2;//各数字のpopcountを求める
        f[i]  = f[i % pop_count[i]] + 1;//fの実装
    }

    //pow2
    vector<long long> one_pow2(220000, 1);
    vector<long long> zero_pow2(220000, 1);

    for(long long i = 1; i < 220000; i++){
        if(one_pop_count != 0) one_pow2[i] = one_pow2[i-1] * 2 % one_pop_count;
        zero_pow2[i] = zero_pow2[i-1] * 2 % zero_pop_count;
    }
    //printf("one_mod %lld zero_mod %lld\n", one_mod, zero_mod);

    for(long long i = n-1; i >= 0; i--){
        if(s[n-1-i] == '1'){
            if(one_pop_count != 0){
                long long nxt = one_mod;
                //todo
                nxt -= one_pow2[i];
                if(nxt < 0) nxt += one_pop_count;
                nxt %= one_pop_count;
                printf("%lld\n", f[nxt]+1);
            }
            else printf("0\n");
            
        }
        else{
            long long nxt = zero_mod;
            //todo
            nxt += zero_pow2[i];
            nxt %= zero_pop_count;
            printf("%lld\n", f[nxt]+1);
        }
    }



    
    return 0;
}