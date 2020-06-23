#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<double> R(n);

    for(long long i = 0; i < n; i++){
        cin >> R[i];
    }

    sort(R.begin(), R.end());

    double sum = 0;

    for(long long i = n - k; i < n; i++){
        sum = (sum+R[i])/2;
    }

    printf("%.8f\n", sum);

    return 0;

}