#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long long n; 
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long sum = 0;
    for(long long i = 0; i < n; i++){
        sum += (long long)pow(2, n-1-i)*a[i];
    }

    cout << sum << endl;
    return 0;
}