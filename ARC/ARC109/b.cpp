#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long right = 2000000000;
    long long left = 0;
   
    while(right - left > 1){
        long long mid = (left + right) / 2;

        if(mid * (mid + 1) > 2*(n+1)) right = mid;
        else left = mid;
    }

    cout << n - left + 1 << endl;

    return 0;
}