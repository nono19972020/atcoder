#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long stand = sqrt(n);

    long long minv = 1e12;
    for(long long a = 1; a <= stand; a++){
        if(n % a == 0){
            long long b = n / a;
            minv = min(minv, a+b-2);
        }
    }

    cout << minv << endl;

    return 0;


}