#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n % 2 == 1){
        printf("0\n");
        return 0;
    }

    long long count = 0;

    long long r = 10;

    while(r <= n){
        count += n/r;
        r *= 5;
    }

    

    cout << count << endl;

    return 0;
}