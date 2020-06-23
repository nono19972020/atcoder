#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, T;
    cin >> n >> T;

    long long t[n];
    for(long long i = 0; i < n; i++){
        cin >> t[i];
    }

    long long right = 0;
    long long left = 0;
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        if(t[i] < right ){
            //left = t[i-1];
            right = t[i] + T;
        }
        else{
            sum += right - left;
            left = t[i];
            right = t[i] + T;

        }
    }

    sum += right - left;

    printf("%lld\n", sum);

    return 0;

}