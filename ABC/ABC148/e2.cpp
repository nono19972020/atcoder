#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n % 2 != 0){
        printf("0\n");
        return 0;
    }


    long long cnt_5 = 0;
    long long pow_5 = 5;


    while(pow_5 <= n){
        cnt_5 += n / (2*pow_5);
        pow_5 *= 5;
    }

    cout << cnt_5 << endl;

    return 0;
}