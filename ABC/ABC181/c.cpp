#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long double> x(n);
    vector<long double> y(n);

    for(long long i = 0; i < n; i++) cin >> x[i] >> y[i];

    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            for(long long k = j + 1; k < n; k++){
                long long ax = x[j] - x[i];
                long long ay = y[j] - y[i];
                long long bx = x[k] - x[i];
                long long by = y[k] - y[i];
                if(ay * bx == ax * by){
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }
    
    printf("No\n");
    return 0;
}