#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double n, m;

    cin >> n >> m;

    if(m - 2*n > 0){
        long long a = n + (m - 2*n)/4;
        printf("%lld\n", a);
    }
    else{
        long long a = m/2;
        printf("%lld\n", a);
    }

    return 0;
}