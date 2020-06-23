#include <iostream>
#include <cstdio>
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
    if(n == 1){
        printf("Not Prime\n");
        return 0;
    }

    if(is_prime(n) == true){
        printf("Prime\n");
    }
    else{
        string s = to_string(n);
        if(s[s.size()-1] != '0' and s[s.size()-1] != '2' and s[s.size()-1] != '4' and s[s.size()-1] != '6' and s[s.size()-1] != '8' and s[s.size()-1] != '5'){
            long long sum = 0;
            for(long long i = 0; i < s.size(); i++){
                sum += s[i] - '0';
            }
            if(sum %3 != 0){
                printf("Prime\n");
            }
            else{
                printf("Not Prime\n");
            }
        }
        else{
            printf("Not Prime\n");
        }
    }
    return 0;


}