#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

bool is_prime(const unsigned n){
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: // fall-through
        case 3: return true;
    } // n > 3 が保証された

    if(n % 2 == 0 || n % 3 == 0) return false;
    // n は 2 と 3 のいずれの倍数でもないことが保証された
    // これより n は (6の倍数)-1 か (6の倍数)+1 である

    // 6の倍数前後の数を使って試し割りをする
    for(unsigned i = 5; i * i <= n; i += 6) {
        if(n % i     == 0) return false; // (6の倍数)-1
        if(n % (i+2) == 0) return false; // (6の倍数)+1
    }

    return true;
}

int main(){
    long long n;
    cin >> n;

    vector<long long> prime;

    for(long long i = 1; i <= 10000; i++){
        if(is_prime(i) == true) prime.push_back(i);
    }

    long long count = 0;

    for(long long i = 0; i < prime.size(); i++){
        if(prime[i] < n) count++;
        else break;
    }
    cout << count << endl;
    return 0;
}