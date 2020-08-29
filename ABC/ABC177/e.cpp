#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++) cin >> a[i];

    long long g = a[0];
    for(long long i = 0; i < n; i++){
        g = gcd(a[i], g);
    }

    if(g > 1){
        printf("not coprime\n");
        return 0;
    }
    
    vector<bool> is_prime(1100000, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for(long long i = 2; i < 1100000; i++){
        if(is_prime[i] == false) continue;
        for(long long j = i*2; j < 1100000; j += i){
            is_prime[j] = false;
        }
    }

    vector<long long> primes;
    vector<long long> not_primes;
    vector<bool> used(1100000, false);
    vector<long long> small_prime;

    for(long long i = 0; i < 1100; i++){
        if(is_prime[i] == true) small_prime.push_back(i);
    }

    for(long long i = 0; i < n; i++){
        if(is_prime[a[i]] == true) primes.push_back(a[i]), used[a[i]] = true;
        else not_primes.push_back(a[i]);
    }

    for(long long i = 0; i < not_primes.size(); i++){
        for(long long j = 0; j < small_prime.size(); j++){
            if(not_primes[i] == 1) break;
            if(not_primes[i] % small_prime[j] != 0) continue;

            if(used[small_prime[j]] == true){
                printf("setwise coprime\n");
                return 0;
            }

            used[small_prime[j]] = true;

            while(not_primes[i] % small_prime[j] == 0){
                not_primes[i] /= small_prime[j];
            }

            if(not_primes[i] > 1){
                if(used[not_primes[i]] == true){
                    printf("setwise coprime\n");
                    return 0;
                }
                used[not_primes[i]] = true;
            }
        }
    }

    printf("pairwise coprime\n");
    return 0;
}