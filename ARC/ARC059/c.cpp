#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long cost_min = 200*200*100;

    for(long long i = -100; i <= 100; i++){
        long long cost = 0;
        for(long long j = 0; j < n; j++){
            cost += (i-a[j])*(i-a[j]);
        }
        cost_min = min(cost, cost_min);
    }

    cout << cost_min << endl;

    return 0;
}