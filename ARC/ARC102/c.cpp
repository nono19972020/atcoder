#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long count = 0;
    for(long long a = 1; a <= n; a++){
        if(2*a % k == 0){
            long long amari = a % k;
            long long b = -amari+k;
            long long kazu = (n-b)/k + 1;
            count += kazu*kazu;
        }
    }

    cout << count << endl;
    return 0;
}